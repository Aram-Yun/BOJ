#include <stdio.h>

int main(void) {
  int T, N, M, cnt, tmp;
  scanf("%d", &T);
  for(int i = 0; i < T; i++) {
    scanf("%d %d", &N, &M);
    for(int j = N; j <= M; j++) {
      cnt = 0;
      if(j == 0) {
        cnt++;
      }
      tmp = j;
      while(tmp != 0) {
        if(tmp % 10 == 0) {
          cnt++;
        }
        tmp /= 10;
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}