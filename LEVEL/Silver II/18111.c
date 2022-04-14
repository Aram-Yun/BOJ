#include <stdio.h>

int N, M, B, arr[500][500], max = 0, min = 256, ans = 0; 

int count(int i) {
  int cnt = 0;
  for(int n = 0; n < N; n++) {
    for(int m = 0; m < M; m++) {
      if(arr[n][m] == i) {
        cnt++;
      }
    }
  }
  return cnt;
}

void dig(int i) {
  ans += count(i) * 2;
  B += count(i);
  for(int n = 0; n < N; n++) {
    for(int m = 0; m < M; m++) {
      if(arr[n][m] == i) {
        arr[n][m]--;
      }
    }
  }
  max--;
}

void add(int i) {
  ans += count(i);
  B -= count(i);
  for(int n = 0; n < N; n++) {
    for(int m = 0; m < M; m++) {
      if(arr[n][m] == i) {
        arr[n][m]++;
      }
    }
  }
  min++;
}
 
int main(void) {
  scanf("%d %d %d", &N, &M, &B);
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      scanf("%d", &arr[i][j]);
      max = arr[i][j] > max ? arr[i][j] : max;
      min = arr[i][j] < min ? arr[i][j] : min;
    }
  }
  for(int i = min; i <= 256; i++) {
    if(max == min) {
      break;
    }
    if(count(min) > count(max) * 2 || count(min) > B) {
      dig(max);
    }
    else if(count(min) <= count(max) * 2) {
      add(min);
    }
  }
  printf("%d %d", ans, arr[0][0]);
  return 0;
}