#include <stdio.h>

int main(void) {
  int N = 0, X = 0, A = 0;
  scanf("%d %d", &N, &X);
  for(int i = 0; i < N; i++) {
    scanf("%d", &A);
    if(A < X) {
      printf("%d ", A);
    }
  }
  return 0;
}