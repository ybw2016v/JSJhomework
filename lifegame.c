#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>
#define H 20
#define L 40
int place [H] [L];
int a,b,c;
void start();
void player();
void next();
main()
{
	int z=0;
	puts("dog");
	printf("kkkkkkk");
	start();
	player();
	place[10][8]=1;
	place[10][9]=1;
	place[10][7]=1;
	place[11][7]=1;
	place[8][8]=1;
	place[11][9]=1;
	place[5][9]=1;
	place[6][9]=1;
	place[7][9]=1;
	player();
	next();
	player();
	next();
	player();
	next();
	player();
	next();
	player();
	while (z<300)
	{
		
		usleep(500000);
		next();
		player();
		z++;
	}
}

void start()
{
	
	a=0;
	b=0;
	c=0;
	puts("!");
	while (a<H)
	{
		b=0;
		puts(";");
		while (b!=L)
		{printf("%d",b);
		place[a][b]=0;
		b++;
		puts("?");
		}
	a=a+1;
	printf("%d",a);
	}
}
void player()
{
	
	
	a=0;
	b=0;
	c=0;
	while (a!=H)
	{
		b=0;
		while (b<L)
		{
			if (place[a][b]==0)
			{
				printf(" ");
			}
			else
			{
				printf("@");
			}
			if (b==(L-1))
			printf("\n");
			else
			;
			b++;
		}
		a++;
	}
}
void next()
{
	int n;
	int np[H] [L];
	int i,j,k;
	n=0;
	i=0;
	j=0;
	while (i<H)
	{
		j=0;
		while (j<L)
		{
			n=place[i-1][j-1]+
			place[i-1][j]+
place[i-1][j+1]+
place[i][j-1]+
place[i][j+1]+
place[i+1][j-1]+
place[i+1][j]+
place[i+1][j+1];

         if(n==3)
         {
         	np[i][j]=1;
         }
         else
         {
         	if (n==2)
         	{
         		np[i][j]=place[i][j];
         		}
         		else
         		{
         			np[i][j]=0;
         			}
         	}
		j++;
		}
		i++;
	}
	i=0;
	j=0;
	while (i<H)
	{
		j=0;
		while (j<L)
		{
			place[i][j]=np[i][j];
			
			j++;
		}
		i++;
	}
}
