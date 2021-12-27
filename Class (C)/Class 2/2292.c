#include <stdio.h>

int main(void) {
  int N = 0, sum = 1, cnt = 1; 
  scanf("%d", &N);
  for(int i = 1; i <= 166666667; i++) {
    if(sum >= N) {
      printf("%d", cnt);
      break;
    }
    cnt++;
    sum += 6 * i;
  }
  return 0;
}