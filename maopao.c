//冒泡排序
#include <stdio.h>
main() {
  int dog[10];
  int i, c, k, l, pig, j;
  i = 0;
  c = 0;
  k, l, pig, j = 0;
  while (i <= 9) {
    scanf("%d", dog + i);
    i++;
  }
  while (c <= 9)
     {
    printf("%d ", dog[c]);
    c++;
    }
  while (j <= 8) {
    k = 0;
    while (k <= 8 - j) {
      if (dog[9 - k] < dog[8 - k]) {
        pig = dog[8 - k];
        dog[8 - k] = dog[9 - k];
        dog[9 - k] = pig;
      } else;
      k++;
    }
    j++;
  }
  printf("\n");
  while (l <= 9) {
    printf("%d ", dog[l]);
    l++;
  }
}