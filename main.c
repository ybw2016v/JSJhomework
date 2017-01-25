/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yu
 *
 * Created on 2017年1月25日, 上午9:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct z
{
    char c;
    struct z *next;
};
struct z * head;
struct z * zin(struct z * root)
{
    int f;
    f=0;
    char l;
    struct z *a;
    struct z*b;
    
    {
        head=(struct z*)malloc(sizeof(struct z));
        a=head;
        
        while(f==0)
        {
            l=getchar();
            if(l=='\n')
            {
                (*a).c=l;
                f=1;
                (*a).next=NULL;
            }
            else
            {
                (*a).c=l;
                (*a).next=(struct z*)malloc(sizeof(struct z));
                a=(*a).next;
                f=0;
            }
        }
    }
    return head;
}
void zout(struct z*egg)
{
    int o;
    o=0;
    struct z*k;
    k=egg;
    while(o==0)
    {
        printf("%c",(*k).c);
        if((*k).next==NULL)
        {
            o=1;
            puts("end");
        }
        else
        {
            k=(*k).next;
        }
    }
}

main()
{
    struct z*h;
    puts("请输入字符串:");
    zin(head);
    puts("你输入的字符串为：");
    zout(head);
}
