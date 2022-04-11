#include <stdio.h>

int main(void) {
  int n = 0, m = 0;
  int arr[5] = {0, };

  scanf("%d %d", &n, &m);
  for(int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
    printf("%d", arr[i] - (n * m));
  }
  return 0;
}
