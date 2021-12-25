#include <stdio.h>

int main(void) {
  int max, cnt = 0;
  int arr [9] = {0, };
  for(int i = 0; i < 9; i++) {
    scanf("%d", &arr[i]);
  }
  max = arr[0];
  for(int i = 0; i < 9; i++) {
    if(max < arr[i]) {
      max = arr[i];
      cnt = i;
    }
  }
  printf("%d %d", max, cnt + 1);
  return 0;
}
