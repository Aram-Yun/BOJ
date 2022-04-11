#include <stdio.h>

int main(void) {
  char S[21] = {0, };
  int T = 0, R = 0;
  scanf("%d", &T);
  for(int i = 0; i < T; i++) {
    scanf("%d", &R);
    scanf("%s", S);
    for(int j = 0; j < 21; j++) {
      if(S[j] == 0) {
        break;
      }
      for(int k = 0; k < R; k++) {
        printf("%c", S[j]);
      }
      S[j] == 0;
    }
    printf("\n");
  }
  return 0;
}