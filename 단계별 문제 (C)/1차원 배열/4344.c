#include <stdio.h>

int main(void) {
  int C = 0, N = 0, average = 0, cnt = 0;
  int score[1000] = {0, };
  scanf("%d", &C);
  for(int i = 0; i < C; i++) {
    average = 0, cnt = 0;
    scanf("%d", &N);
    for(int j = 0; j < N; j++) {
      scanf("%d", &score[j]);
      average += score[j];
    }
    average /= N;
    for(int j = 0; j < N; j++) {
      if(score[j] > average) {
        cnt++;
      }
    }
    printf("%.3f%\n", (float)cnt / (float)N * 100.0f);
  }
}