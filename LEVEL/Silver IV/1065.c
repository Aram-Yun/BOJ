#include <stdio.h>

int main(void) {
  int N, cnt = 0;
  scanf("%d", &N);

  for(int i = 1; i <= N; i++) {
    if((i % 10) - (i % 100 / 10) == (i % 10) - i) {
      cnt++;
    }
  }

  printf("%d", cnt);
  return 0;
}