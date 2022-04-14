#include <stdio.h>

int main(void) {
  int arr[5000][2], N, min, tmp, ans = 0;
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  for(int j = 0; j < N; j++) {
  	min = 5000;
    for(int i = 0; i < N; i++) {
      if(arr[j][1] == arr[i][1]) {
        tmp = arr[j][0] - arr[i][0] > 0 ? arr[j][0] - arr[i][0] : (arr[j][0] - arr[i][0]) * -1;
        if(tmp < min && i != j) {
          min = tmp;
        }
      }
    }
    ans += min;
  }
  printf("%d", ans);
  return 0;
}