#include <stdio.h>

int main(void) {
  int arr[3], ans[3];
  scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
  for(int i = 1; i <= 7980; i++) {
    ans[0] = i % 15;
    if(ans[0] == 0) {
      ans[0] = 15;
    }
    ans[1] = i % 28;
    if(ans[1] == 0) {
      ans[1] = 28;
    }
    ans[2] = i % 19;
    if(ans[2] == 0) {
      ans[2] = 19;
    }
    if(ans[0] == arr[0] && ans[1] == arr[1] && ans[2] == arr[2]) {
      printf("%d",i);
    }
  }
  return 0;
}