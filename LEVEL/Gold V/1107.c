#include <stdio.h>

int arr[10] = {0,};

int count(int n) {
  int len = 0;
  if(n < 0) return -1;
  if(n == 0) return arr[0] ? -1 : 1; 
  while(n) {
    if(arr[n % 10] == 1) return -1;
    n /= 10;
    len++;
  }
  return len;
}

int main(void) {
  int N, M, tmp, ans;
  scanf("%d %d", &N, &M);
  for(int i = 0; i < M; i++) {
    scanf("%d", &tmp);
    arr[tmp] = 1;
  }
  ans = N - 100 > 0 ? N - 100 : 100 - N;
  for(int i = 0; i < 500000; i++) {
    if(count(N - i) != -1 && ans > count(N - i) + i) {
      ans = count(N - i) + i;
      break;
    }
    if(count(N + i) != -1 && ans > count(N + i) + i) {
      ans = count(N + i) + i;
      break;
    }
  }
  printf("%d", ans);
  return 0;
}