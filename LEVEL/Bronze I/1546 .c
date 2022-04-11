#include <stdio.h>

int main(void) {
  int N = 0;
  double sum, max = 0;
  double arr[1000] = {0, };
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
    if(i == 0) {
      max = arr[0];
    }
    else {
      if(max < arr[i]) {
        max = arr[i];
      }
    }
  }
  for(int i = 0; i < N; i++) {
    sum += (arr[i] / max) * 100.0f;
  }
  printf("%.3f", sum / N);
  return 0;
}