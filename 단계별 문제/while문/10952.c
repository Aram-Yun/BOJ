#include <stdio.h>
 
int main(void) {
  int A = 1, B = 0;
  while(1) {
    scanf("%d %d", &A, &B);
    if(A + B == 0) {
      break;
    }
    printf("%d\n", A + B);
  }
  return 0;
}