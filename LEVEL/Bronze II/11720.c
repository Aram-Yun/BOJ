#include <stdio.h>

int main(void) {
  int T = 0, sum = 0;
  int arr[100] = {0, };
  scanf("%d", &T);
  for(int i = 0; i < T; i++) {
    scanf("%1d", &arr[i]);
    sum += arr[i];
  }
  printf("%d", sum);
  return 0;
}