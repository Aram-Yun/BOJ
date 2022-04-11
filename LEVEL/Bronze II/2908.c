#include <stdio.h>

int main(void) {
  int fisrt[3] = {0, };
  int second[3] = {0, };
  int one = 0, two = 0;
  for(int i = 0; i < 3; i++) {
    scanf("%1d", &fisrt[i]);
  }
  for(int i = 0; i < 3; i++) {
    scanf("%1d", &second[i]);
  }
  one = fisrt[2] * 100 + fisrt[1] * 10 + fisrt[0];
  two = second[2] * 100 + second[1] * 10 + second[0];
  if(one > two) {
    printf("%d", one);
  }
  else {
    printf("%d", two);
  }
  return 0;
}