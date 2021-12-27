#include <stdio.h>

int main(void) {
  int input = 0, result = 0;
  for(int i = 0; i < 5; i++) {
    scanf("%d", &input);
    result += input * input;
  }
  printf("%d", result % 10);
  return 0;
}