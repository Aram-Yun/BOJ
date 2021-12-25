#include <stdio.h>

int main(void) {
  int A, B, C;
  unsigned int result = 0;
  int arr[9] = {0 ,};
  int cnt[10] = {0, };
  scanf("%d %d %d", &A, &B, &C);
  result = A * B * C;
  for(int i = 0; i < 9; i++) {
    arr[i] = result % 10;
    for(int j = 0; j < 10; j++) {
      if(arr[i] == j) {
        cnt[j] += 1;
        break;
      }
    }
    result /= 10; 
    if(result == 0) {
      for(int j = 0; j < 10; j++) {
        printf("%d\n", cnt[j]);
      }
      return 0;
    }
 }
 return 0;
}