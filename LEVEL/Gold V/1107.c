#include <stdio.h>

int main(void) {
  int N, M, arr[10] = {-1,}, tmp, max = 0, min = 1000000, cnt, ans, cnt2 = 1, cnt3 = 0;
  scanf("%d %d", &N, &M);
  for(int i = 0; i < M; i++) {
    scanf("%d", &arr[i]);
    if(arr[i] == 0) cnt3 = 1;
  }
  for(int i = 0; i <= 500000; i++) {
    if(i >= N) break;
    tmp = i;
    for(int j = 0; j < 6; j++) {
      cnt = 0;
      if(tmp == 0)  break;
      for(int s = 0; s < M; s++) {
        if(tmp % 10 == arr[s])  cnt = 1;
      }
      if(cnt == 1)  break;
      tmp /= 10;
    }
    if(cnt == 1)  continue;
    max = max < i ? i : max;
  }
  for(int i = 1000000; i > 0; i--) {
    if(i < N)  break;
    tmp = i;
    for(int j = 0; j < 6; j++) {
      cnt = 0;
      if(tmp == 0)  break;
      for(int s = 0; s < M; s++) {
        if(tmp % 10 == arr[s])  cnt = 1;
      }
      tmp /= 10;
      if(cnt == 1)  break;
    }
    if(cnt == 1)  continue;
    min = min > i ? i : min;
  }
  if(max == 0 && cnt3 == 1) {
  	ans = min - N;
  	tmp = min;
  }
  else {
  	ans = min - N < N - max ? min - N : N - max;
	tmp = min - N < N - max ? min : max; 
  }
  while(1) {
    tmp /= 10;
    if(tmp == 0)  break;
    cnt2++;
  }
  ans += cnt2;
  if(ans > N - 100 && N - 100 >= 0) {
    ans = N - 100;
    printf("%d", ans);
    return 0;
  }
  else if(ans > 100 - N && 100 - N >= 0) {
    ans = 100 - N;
    printf("%d", ans);
    return 0;
  }
  else {
  	printf("%d", ans);
  }
  return 0;
}