#include <stdio.h>

int main(void) {
  int flat[15][14] = {
    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}
  };
  int T = 0, k = 0, n = 0;
  scanf("%d", &T);
  for(int i = 1; i < 15; i++) {
    for(int j = 0; j < 14; j++) {
      for(int l = 0; l <= j; l++) {
        flat[i][j] += flat[(i - 1)][l];
      }
    }
  }
  for(int i = 0; i < T; i++) {
    scanf("%d %d", &k, &n);
    printf("%d\n", flat[k][(n - 1)]);
  }
  return 0;
}