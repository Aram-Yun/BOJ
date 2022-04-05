#include <stdio.h>

int amount(int first, int second, int third, int N) {
  if(second >= 10) {
    if(first > N) {
      return 0;
    }
    return 1;
  }
  else if(third >= 10) {
    if((second * 10) + first > N) {
      return 1;
    }
    return 2;
  }
  else {
    if((third * 100) + (second * 10) + first > N) {
      return 2;
    }
    return 3;
  }
}

int main(void) {
  int N, count = 0;
  scanf("%d", &N);
  for(int i = 0; i <= 9; i++) {
    for(int j = 0; j <= 9; j++) {
      count += amount(i, i + j, i + j + j, N);
      printf("%d w' %d = %d\n", i, j, amount(i, i + j, i + j + j, N));
    }
  }
  printf("%d", count - 81);
  return 0;
}

/* 현재 21, 32처럼 앞에가 큰 숫자는 세어지고 있으나 12, 23처럼 뒤집어진(앞에가 작은) 숫자들은 세어지지 않고 있다. 
이를 해결하면 문제가 풀릴듯 하다. */