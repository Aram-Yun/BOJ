#include <stdio.h>

int main(void) {
  int x = 0, y = 0, w = 0, h = 0, bin1 = 0, bin2 = 0, result = 0;
  scanf("%d %d %d %d", &x, &y, &w, &h);
  bin1 = x < (w - x) ? x : (w - x);
  bin2 = y < (h - y) ? y : (h - y);
  result = bin1 < bin2 ? bin1 : bin2;
  printf("%d", result);
  return 0;
}
