#include <stdio.h>

int main(void) {
  int N, cnt = 0;
  scanf("%d", &N);
  for(int i = 1; i <= 10000666; i++) {
  	for(int j = 1; j < 1000000; j *= 10) {
        if(i / j == 666 || i / j % 1000 == 666) {
          cnt++;
          break;
        }
    }
    if(cnt == N) {
      printf("%d", i);
      break;
    }
  }
  return 0;
}