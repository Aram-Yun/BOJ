#include <stdio.h>

int main(void) {
  int quotient = 0, N = 0;
  scanf("%d", &N);
  quotient = N / 5;
  for(int i = quotient; i >= 0; i--) {
    if(((N - (i * 5)) % 3) == 0) {
      printf("%d", i + (N - i * 5) / 3);
      break;
    }
    else if(i == 0) {
      printf("-1");
    }
  }
  return 0;
}