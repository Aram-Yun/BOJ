#include <stdio.h>

int main(void) {
  int arr[5] = {-1, };
  int bin = -1, mod = 10, div = 1, compare = 0, mul = 1;
  while(1) {
    scanf("%d", &bin);
    if(bin == 0) {
      break;
    }
    for(int i = 0; i < 5; i++) {
      arr[i] = -1;
    }
    for(int i = 0; i < 5; i++) {
      if(div > bin) {
        break;
      }
      arr[(4 - i)] = bin % mod / div;
      mod *= 10;
      div *= 10;
    }
    for(int i = 0; i < 5; i++) {
      if(arr[i] == -1) {
        continue;
      }
      compare += mul * arr[i];
      mul *= 10;
    }
    if(compare == bin) {
      printf("yes\n");
    }
    else {
      printf("no\n");
    }
    mod = 10, div = 1, compare = 0, mul = 1;
  }
  return 0;
}