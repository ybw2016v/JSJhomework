#include<stdio.h>
int cup(int p)
 {
  if (p > 50)
   {
    printf("\ntoo long\n");
    p = 50;
  } else;
  return p;
}
void hpig(int *dog, int hdog)
 {
  int c, d;
  c = 0;
  d = 0;
  printf("\n");
  for (; c < hdog; c++) 
  {
    printf(" %d   ", *(dog + c));
    if ((c + 1) % 5 == 0)
      printf("\n");
    else;
  }
}
int *spig(int n) 
{
  static int pig[55];
  int i = 0;
  int *l;
   pig[0] = 1;
  pig[1] = 1;
  while (i < n)
   {
    pig[i + 2] = pig[i + 1] + pig[i];
    i++;
  }
  l = pig;
  return l;
}
main() 
{
  int b;
  b = 0;
  int *k;
  printf("数列生成器\n数列的长度?\n");
  scanf("%d", &b);
  b = cup(b);
  k = spig(b);
  hpig(k, b);
}