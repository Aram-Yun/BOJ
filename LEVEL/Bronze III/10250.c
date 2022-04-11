#include <stdio.h>

int main(void) {
  int hotel[99][99] = {0, };
  int H = 0, W = 0, N = 0, T = 0;
  scanf("%d", &T);
  for(int i = 0; i < T; i++) {
    scanf("%d %d %d", &H, &W, &N);
    if(N % H == 0) {
      if(N / H + 1 < 10) {
        printf("%d0%d\n", H, N / H);
      } 
      else {
        printf("%d%d\n", H, N / H);
      }
    } 
    else {
      if(N / H + 1 < 10) {
        printf("%d0%d\n", N % H, N / H + 1);
      } 
      else {
        printf("%d%d\n", N % H, N / H + 1);
      }
    }
  }
  return 0;
}