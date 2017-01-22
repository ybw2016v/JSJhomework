// 冒泡排序
#include <stdio.h>
main() {
  int dog[50];
  int i, c, k, l, pig, j, cat;
  printf("几个数参与排序?\n");
  scanf("%d",&cat);
  printf("请输入%d个整数。\n",cat);
  i = 0;
  c = 0;
  k, l, pig, j = 0;
  while (i <= (cat - 1)) {
    scanf("%d", dog + i);
    i++;
  }
  printf("输入的数为：\n");
  while (c <= (cat - 1)) {
    printf("%d ", dog[c]);
    c++;
  }
  while (j <= (cat - 2)) {
    k = 0;
    while (k <= (cat - 2 - j)) {
      if (dog[cat - 1 - k] < dog[cat - 2 - k]) {
        pig = dog[cat - 2 - k];
        dog[cat - 2 - k] = dog[cat - 1 - k];
        dog[cat - 1- k] = pig;
      } else;
      k++;
    }
    j++;
  }
  printf("\n排序结果为：\n");
  while (l <= cat - 1 ) {
    printf("%d ", dog[l]);
    l++;
  }
}