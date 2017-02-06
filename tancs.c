#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define C 40
#define K 20
#include <unistd.h>
#include <conio.h>
#include <time.h>
int nx=0;
int ny=1;
int xy=1;
int yx=0;
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
void show();
void start();
void mapnew();
void move();
void aj();
main()
{
    
	start();
	
	show();
	mapnew();
puts("j");
	show();
	for(int i=0;i<100;i)
	{
		aj();
	move();
	
	mapnew();
	show();
	}
}
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
				printf(" ");
			}
			else
			{
				if (d==1)
				{
					printf("#");
				}
				else
				{
					if (d==3)
					{
						printf("*");
					}
					else
					{
						printf("@");
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
	usleep(500000);
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
	int abc,bbc;
    for (abc=0;abc<K;abc++)
	{

		for (bbc=0;bbc<C;bbc++)
		{
			map[abc][bbc]=0;
		}
	}
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
    struct she * h;
    struct she * m;
    struct she * n;
    int o;
    h=head;
    head=(struct she*)malloc(sizeof(struct she));
    
   {
       // printf("%d,%d",nx,ny);
        (*head).x=(*h).x+nx;
        (*head).y=(*h).y+ny;
        (*head).next=h;

    }
    m=head;
   for (o=0;o==0;)
    {
    	n=(*m).next;
    	
    	if ((*n).next==NULL)
    	{
    		
    		(*m).next=NULL;
    		o=1;
    		free(n);
    	}
    	else
    	{
    		m=n;
    	}
    	}
}
void aj()
{
	int jnx,jny;
	int hug;
	char jian;
	if (kbhit()!=0)
	{
	//while(kbhit()!=0)
	{
		jian=getchar();
		
	}
	switch (jian)
	{
	case 's':
	{
		jnx=0;
		jny=1;
		xy=1;
		break;
	}
	case 'a':
	{
		jnx=-1;
		jny=0;
		xy=2;
		break;
	}
	case 'w':
	{
		jnx=0;
		jny=-1;
		xy=-1;
		break;
	}
	case 'd':
	{
		jnx=1;
		jny=0;
		xy=-2;
		break;
	}
	case '\n':
	{
		jnx=nx;
		jny=ny;
		xy=xy;
	}
	}
	if ((xy+yx)==0)
	;
	else
	{
		nx=jnx;
		ny=jny;
	}
	yx=xy;
}
}