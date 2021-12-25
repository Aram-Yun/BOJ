#include <stdio.h>

int main(void) {
  char arr[80] = {0, };
  char buffer = 0;
  int N = 0, bin = 0, cnt = 0;
  scanf("%d", &N);
  buffer = getchar();
  for(int i = 0; i < N; i++) {
    bin = 0, cnt = 0;
    for(int j = 0; j < 80; j++) {
      arr[j] = getchar();
      if(arr[j] == '\n') {
        break;
      }
      else if(arr[j] == 'O') {
        bin++;
        cnt += bin;
        continue;
      }
      else if(arr[j] == 'X') {
        bin = 0;
        continue;
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}