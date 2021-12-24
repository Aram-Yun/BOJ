#include <stdio.h>

int main(void) {
  int first = 0;
  int second_1 = 0, second_2 = 0, second_3 = 0;

  scanf("%d %1d%1d%1d", &first, &second_1, &second_2, &second_3);
  printf("%d\n%d\n%d\n%d", first * second_3, first*second_2, first*second_1, first * second_3 + first*10*second_2 +first*100*second_1);

  return 0;
}