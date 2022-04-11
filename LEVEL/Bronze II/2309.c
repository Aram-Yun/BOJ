#include <stdio.h>

int main(void) {
  int arr[9], sum = 0, minus, bin;
  for(int i = 0; i < 9; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 8; j++) {
      if(arr[j] > arr[j + 1]) {
        bin = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = bin;
      }
    }
  }
 

  for(int i = 0; i < 9; i++) {
    for(int j = i + 1; j < 9; j++) {
      minus = arr[i] + arr[j];
      if(sum - minus == 100) {
        for(int t = 0; t < 9; t++) {
          if(t == i || t == j) {
            continue;
          }
          printf("%d\n", arr[t]);
        }
      }
    }
  }
  return 0;
}