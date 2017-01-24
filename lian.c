#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dog 
{
	char name[10];
	int age;
	struct dog *next;
};
main()
{
	struct dog * head =NULL;
	struct dog * cat,*pig;
	char dogname[10];
	
	puts("namespace");
	gets(dogname);
	head=(struct dog*)malloc(sizeof(struct dog));
	strcpy((*head).name,dogname);
	puts("dogage");
	scanf("%d",&((*head).age));
	getchar();
	
	printf("%s\n%d",(*head).name,(*head).age);
	puts("\nname");
	(*head).next=(struct dog*)malloc(sizeof(struct dog));
	gets(dogname);
	pig=(*head).next;
	strcpy((*pig).name,dogname);
	puts("age");
	scanf("%d",&((*pig).age));
	printf("%s\n%d",(*pig).name,(*pig).age);
}