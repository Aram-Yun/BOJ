#include <stdio.h>

int sum(int a) {
  int arr[5] = {0,};
  int ans = 0;
  arr[0] = a;
  arr[1] = a % 10;
  arr[2] = a % 100 / 10;
  arr[3] = a % 1000 / 100;
  arr[4] = a / 1000;
  for(int i = 0; i < 5; i++) {
    ans += arr[i];
  }
  return ans;
}

int main(void) {
  int cnt[10000] = {0, };
  for(int i = 1; i <= 10000; i++) {
    for(int j = 0; j < 10000; j++) {
      if(sum(i) == (j + 1)) {
        cnt[j]++;
      }
    }
  }
  for(int j = 0; j < 10000; j++) {
     if(cnt[j] == 0) {
      printf("%d\n", (j + 1));
    }
  }
    
  return 0;
  
}