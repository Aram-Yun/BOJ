#include <bits/stdc++.h>
using namespace std;

int N, arr[10'000], M, sum = 0, mx = 0, ans, tmp[10'000];

void merge_sort(int a, int b) {
  if(a == b) return;
  int mid = (a + b) / 2;
  merge_sort(a, mid);
  merge_sort(mid + 1, b);
  int x = a, y = mid + 1, z = a;
  while(x <= mid and y <= b) {
    if(arr[x] > arr[y])  tmp[z++] = arr[x++];
    else  tmp[z++] = arr[y++];
  }
  while(x <= mid)  tmp[z++] = arr[x++];
  while(y <= b)  tmp[z++] = arr[y++];
  for(int i = a; i <= b; i++)  arr[i] = tmp[i];
}

int main(void) {
  int minus;
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
    mx = max(arr[i], mx);
  }
  scanf("%d", &M);
  if(sum <= M) ans = mx;
  else {
    minus = sum - M;
    sum = 0, mx = 0;
    merge_sort(0, N - 1);
    for(int i = 0; i < N; i++) {
      sum += arr[i];
      mx = max((sum - minus) / (i + 1), mx);
    }
    ans = mx;
  }
  printf("%d", ans);
  return 0;
}