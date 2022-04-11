#include <stdio.h>

int main(void) {
  int N, M, B, arr[500][500], min = 500, cnt = 0, max = 0, ans;
  scanf("%d %d %d", &N, &M, &B);
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      scanf("%d", arr[N][M]);
      if(min > arr[N][M]) {
        min = arr[N][M];
        cnt++;
      }
      if(max < arr[N][M]) {
        max = arr[N][M];
      }
    }
  }
  while(1) {
    if(min == max) {
      break;
    }
    if(cnt <= B) {
      printf("%d %d", cnt, min + 1);
    }
  }
  return 0;
}