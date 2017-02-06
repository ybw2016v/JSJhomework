#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define C 40
#define K 20
int chang;
int map [K] [C];
struct shi 
{
	int x;
	int y;
}food;
struct she
{
	int x;
	int y;
	struct she* next;
};
struct she * head ;
void show()
{
	system("clear");
	int a,b,c,d;
	a=0;
	b=0;
	c=0;
	puts("NULL");
	for (c=0;c<C+2;c++)
	{
		printf("$");
	}
	printf("\n");
	for (;a<K;a++)
	{
		printf("$");
		for (b=0;b<C;b++)
		{
			d=map[a][b];
			if (d==0)
			{
				printf("@");
			}
			else
			{
				if (d==1)
				{
					printf("&");
				}
				else 
				{
					if (d==3)
					{
						printf("*");
					}
					else
					{
						printf("#");
					}
				}
			}
		}
		printf("$\n");
		}
	for (c=0;c<C+2;c++)
	{
		printf("$");
	}
	printf("\n");
}
void start();
void mapnew();
main()
{
	start();
	show();
	mapnew();
	
	show();
}
void start()
{
	int a,b,c;
    for (a=0;a<K;a++)
	{
		
		for (b=0;b<C;b++)
		{
			map[a][b]=0;
		}
	}
	food.x=(C/4);
	food.y=(K/2);
	head=(struct she*)
	malloc(sizeof(struct she));
	(*head).x=1;
	(*head).y=1;
	(*head).next=NULL;
}
void mapnew()
{
	int a,b,c,d;
	a=food.y;
	b=food.x;
	map[a][b]=3;
	c=(*head).y;
	d=(*head).x;
	map[c][d]=2;
	
}