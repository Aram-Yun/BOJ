#include <stdio.h>

int main(void) {
  int N, arr[50][3] = {0, };
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
        arr[i][2]++;
      }
    }
  }

  for(int i = 0; i < N; i++) {
    printf("%d ", arr[i][2] + 1);
  }
  return 0;
}