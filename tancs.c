#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define C 40
#define K 20


int c,f;
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
    c=1;
    f=1;
	start();
	show();
	mapnew();
puts("j");
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
	(*head).x=2;
	(*head).y=2;
	(*head).next=(struct she*)
	malloc(sizeof(struct she));
        (*((*head).next)).next=NULL;
        (*((*head).next)).x=2;
        (*((*head).next)).y=3;
}
void mapnew()
{
	int a,b,c,d;
	int e;
	struct she * m;
	m=NULL;
	e=0;
	a=food.y;
	b=food.x;
	m=head;
	while (e==0)
    {

            int pig,dog;
            pig=0;
            dog=0;
            pig=(*m).x;
            dog=(*m).y;
            map[dog][pig]=1;
        if((*m).next==NULL)
        {

           e=1;
        }
        else
        {
            m=(*m).next;
        }
    }

    map[a][b]=3;
	c=(*head).y;
	d=(*head).x;
	map[c][d]=2;

}
void move()
{
    struct she * h,m;
    int o;
    h=head;
    head=(struct she*)malloc(sizeof(struct she));
    //swich c:
   // case 1
    {
        
        (*head).x=(*h).x+1;
        (*head).y=(*h).y;
        (*head).next=h;

    }
    for()
}
