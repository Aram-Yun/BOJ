#include <stdio.h>

int main(void) {
  int stone[101] = {0, };
  int cnt = 0, money = 0, order = 0;
  double blue = 0, green = 0, red = 0;
  char temp = 0;

  scanf("%d %d", &money, &cnt);

  for(int i = 0; i < cnt; i++) {
    scanf("%d %c", &order, &temp);
    if(temp == 'R') {
      for(int j = order; j < 100; j++) {
        stone[j]++;
      }
    }
    else if(temp == 'L') {
      for(int j = order - 2; j >= 0; j--) {
        stone[j]++;
      }
    }
  }

  for(int i = 0; i < 100; i++) {
    stone[i] = stone[i] % 3;
    if(stone[i] == 0) {
      blue++;
    }
    else if(stone[i] == 1) {
      red++;
    }
    else if(stone[i] == 2) {
      green++;
    }
  }
  printf("%.2f\n%.2f\n%.2f", (blue / 100) * money, (red / 100) * money, (green / 100) * money);
  return 0;

}