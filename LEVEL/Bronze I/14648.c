#include <stdio.h>

int main(void) {
  int n = 0, q = 0, temp = 0, a = 0, b = 0, c = 0, d = 0;
  long ans = 0;
  long arr[1001] = {0,};
  scanf("%d %d", &n, &q);
  for(int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }
  for(int i = 0; i < q; i++) {
    ans = 0;
    scanf("%d", &temp);
    if(temp == 1) {
      scanf("%d %d", &a, &b);
      for(int j = a - 1; j < b; j++) {
        ans += arr[j];
      }
      temp = arr[(b - 1)];
      arr[(b - 1)] = arr[(a - 1)];
      arr[(a - 1)] = temp;
    }
    else if(temp == 2) {
      scanf("%d %d %d %d", &a, &b, &c, &d);
      for(int j = a - 1; j < b; j++) {
        ans += arr[j];
      }
      for(int j = c - 1; j < d; j++) {
        ans -= arr[j];
      }
    }
    printf("%ld\n", ans);
  }
  return 0;
}
