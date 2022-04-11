#include <stdio.h>

int main(void) {
  int T, N, arr[1000], max = 0, sum = 0;
  scanf("%d", &T);
  for(int i = 0; i < T; i++) {
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
      scanf("%d", &arr[j]);
    }
    for(int j = 0; j < N; j++) {
      for(int s = 0; s <= j; s++) {
        sum += arr[s];
        if(max < sum) {
          max = sum;
          printf("max : %d", max);
        }
      }
      sum = 0;
    }
    printf("%d\n", max);
    max = 0;
  }
  return 0;
} 