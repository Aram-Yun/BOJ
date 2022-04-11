#include <stdio.h>

int main(void) {
  int A = 0, B = 0, V = 0;
  scanf("%d %d %d", &A, &B, &V);
  if((V - B) % (A - B) == 0) {
    printf("%d", (V - B) / (A - B));
  }
  else {
    printf("%d", (V - B) / (A - B) + 1);
  }
  return 0;
}