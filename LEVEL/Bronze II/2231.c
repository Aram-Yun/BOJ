#include <stdio.h>

int main(void) {
  int N = 0, sum = 0, sqr = 1, dvi = 1;
  scanf("%d", &N);
  for(int i = 1; i <= N; i++) {
    sqr = 1, sum = 0, dvi = 1;
    for(int j = 1; j <= 6; j++) {
      if(sqr > N) {
        break;
      }
      sqr *= 10;
      sum += i % sqr / dvi;
      dvi *= 10;
    }
    sum += i;
    if(i == N) {
      printf("0");
      break;
    }
    else if(sum == N) {
      printf("%d", i);
      break;
    }
  }
  return 0;
}