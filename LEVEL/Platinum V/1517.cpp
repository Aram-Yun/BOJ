#include <iostream>
using namespace std;

long long N, ans = 0, arr[500'000], tmp[500'000];

void merge_sort(int a, int b) {
  if(a == b) return;
  long long mid = (a + b) / 2;
  merge_sort(a, mid);
  merge_sort(mid + 1, b);
  int x = a, y = mid + 1, z = a;
  while(x <= mid and y <= b) {
    if(arr[x] <= arr[y]) {
      tmp[z++] = arr[x++];
    }
    else {
      ans += y - z;
      tmp[z++] = arr[y++];
    }
  }
  while(x <= mid) tmp[z++] = arr[x++];
  while(y <= b) tmp[z++] = arr[y++];
  for(int i = a; i <= b; i++) arr[i] = tmp[i];
}

int main(void) {
  cin >> N;
  for(int i = 0; i < N; i++) cin >> arr[i];
  merge_sort(0, N - 1);
  cout << ans;
  return 0;
}