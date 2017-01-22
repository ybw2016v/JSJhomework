#include <stdio.h>
int seadog(int hidog[], int n) {
  int i, j, k, pig, cat;
  i = 0;
  j = 0;
  k = 0;
  cat = n;
  while (j <= (cat - 2)) {
    k = 0;
    while (k <= (cat - 2 - j)) {
      if (hidog[cat - 1 - k] < hidog[cat - 2 - k]) {
        pig = hidog[cat - 2 - k];
        hidog[cat - 2 - k] = hidog[cat - 1 - k];
        hidog[cat - 1 - k] = pig;
      } else;
      k++;
    }
    j++;
  }
  return 0;
}
void sdog(int fly[], int n) {
  int c;
  c = 0;
  printf("\n排序结果为：\n");
  while (c <= (n - 1)) {
    printf("%d ", fly[c]);
    c++;
  }
}
main() {
  int dog[50];
  int i, c, k, l, pig, j, cat;
  int p;
  printf("几个数参与排序?\n");
  scanf("%d", &cat);
  printf("请输入%d个整数。\n", cat);
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
  {
    p = seadog(&dog[0], cat);
    sdog(&dog[0], cat);
  }
}