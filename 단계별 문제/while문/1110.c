#include <stdio.h>

int main(void) {
  int num, fir, new_fir, new_sec, sec, cnt = 0;
  scanf("%d", &num);
  fir = num / 10;
  sec = num % 10;
  while(1) {
    new_fir = sec;
    new_sec = (fir + sec) % 10;
    cnt++;
    if((new_fir * 10 + new_sec) == num) {
      printf("%d", cnt);
      break;
    }
    fir = new_fir;
    sec = new_sec;
  }
  return 0;
}