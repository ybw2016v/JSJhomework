#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
		head=a;
		
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
	
}
	