#include <stdio.h>
 
int main(void) {
  int A = 0, B = 0;
  while(scanf("%d %d", &A, &B) != EOF) {
    printf("%d", A + B);
  }
  return 0;
}