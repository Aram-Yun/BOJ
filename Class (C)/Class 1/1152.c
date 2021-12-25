#include <stdio.h>

int main(void) {
  char string[1000000] = {0, };
  int cnt = 0, last = 0;
  for(int i = 0; i < 1000000; i++) {
    if((string[i] = getchar()) == EOF) {
      if(string[i] != ' ') {
      last = i - 1;
      break;
      }
    }
    if(string[i] == ' ') {
      if(i == 0) {
        continue;
      }
      else {
        cnt++;
      }
    }
  }
  if(string[last] == ' ') {
    cnt--;
  }
  else {
    cnt++;
  }
  printf("%d", cnt);
  return 0;
}