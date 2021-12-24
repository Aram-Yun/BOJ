#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int main(void) {
  int N, M, m = 0;
  int arr[1000000] = {0,};
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < N; i++) {
    M = max(arr[i], arr[i+1]);
    m = min(arr[i], arr[i+1]);
  }

  printf("%d %d", m, M);
  return 0;
}