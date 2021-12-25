#include <stdio.h>

int main(void) {
  int max, min, cnt = 0;
  int arr[1000000] = {0, };
  scanf("%d", &cnt);
  for(int i = 0; i < cnt; i++) {
    scanf("%d", &arr[i]);
    if(i == 0) {
      max = arr[0];
      min = arr[0]
      continue;
    }
    else {
      if(max < arr[i]) {
        max = arr[i];
      }
      if(min > arr[i]) {
        min = arr[i];
      }
    }
  }
  printf("%d %d", min, max);
  return 0;
}