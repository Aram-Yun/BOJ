#include <stdio.h>

int main(void) {
  int N = 0, answer = 0;
  scanf("%d", &N);
  for(int i = 1; i <= N; i++) {
    answer += i;
  }
  printf("%d", answer);
  return 0;
}