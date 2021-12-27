#include <stdio.h>

int main(void) {
  int N = 0, M = 0, max = 0, bin = 0;
  int card[100] = {0, };
  scanf("%d %d", &N, &M);
  for(int i = 0; i < N; i++) {
    scanf("%d", &card[i]);
  }
  for(int i = 0; i < (N - 2); i++) {
    for(int j = (i + 1); j < (N - 1); j++) {
      for(int u = (j + 1); u < N; u++) {
        bin = card[i] + card[j] + card[u];
        if(bin > max && bin <= M) {
          max = bin;
        }
      }
    }
  }
  printf("%d", max);
  return 0;
} 