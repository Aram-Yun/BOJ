#include <stdio.h>

int main(void) {
  int A = 0, B = 0;
  scanf ("%d %d", &A, &B);
  printf ("%d\n%d\n%d\n%d\n%d", A+B, A-B, A*B, A/B, A%B);

  return 0;
}
