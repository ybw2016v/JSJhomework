/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sys.c
 * Author: yu
 *
 * Created on 2017年1月25日, 上午10:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
struct birthday {
        int year;
        int mutch;
        int day;
    }dogb;
struct dog {
    int number;
    char name[20];
    struct birthday dogb;
    struct dog * next;
    };
    
struct dog *head;
void dogin()
{
    struct dog*pig;
    pig=head;
    char namedog[20];
    char cat[10];
    cat[0]='y';
    while (cat[0]=='y')
    {
            
    puts("信息输入：");
    puts("dog number:");
    scanf("%d",&((*pig).number));
    getchar();
    puts("dog name:");
    gets(namedog);
    strcpy(((*pig).name),namedog);
    puts("dog'year:");
    scanf("%d",&((*pig).dogb.year));
    getchar();
    puts("dog'day:");
    scanf("%d",&((*pig).dogb.day));
 
    getchar();
    puts("next?");
    gets(cat);
    if(cat[0]=='y')
    {
        (*pig).next=(struct dog*)malloc(sizeof(struct dog));
        pig=(*pig).next;
    }
    else
    {
    (*pig).next=NULL;
    puts("end");
    }
    }
    }


void dogout()
{
    struct dog *out;
    out=head;
    puts("inferation");
    while((out)!=NULL)
    {
        printf("%s %3d %d-%d\n",(*out).name,(*out).number,(*out).dogb.year,(*out).dogb.day);
        out=(*out).next;
    }
}

 main() {
    head=(struct dog*)malloc(sizeof(struct dog));
    puts("welcome to dog manger system");
    char hot;
    dogin();
    dogout();        

    return (EXIT_SUCCESS);
}
