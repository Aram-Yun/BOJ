#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, ans[3];
  long long mn = LONG_LONG_MAX;
  vector<long long> arr;
  cin >> N;
  arr.resize(N);
  for(auto& x : arr) cin >> x;
  sort(arr.begin(), arr.end());
  if(arr[0] >= 0) {cout << arr[0] << ' ' << arr[1] << ' ' << arr[2]; return 0;}
  if(arr[N - 1] <= 0) {cout << arr[N - 3] << ' ' << arr[N - 2] << ' ' << arr[N - 1]; return 0;}
  for(int i = 0; i < N - 1; i++) for(int j = i + 1; j < N; j++) {
    int sum = arr[i] + arr[j];
    int tmp = lower_bound(arr.begin(), arr.end(), -1 * sum) - arr.begin();
    for(int s = tmp - 5; s < tmp + 5; s++) {
      if(s < 0 or s >= N or s == i or s == j) continue;
      if(mn > abs(sum + arr[tmp])) {
        mn = abs(sum + arr[tmp]);
        ans[0] = arr[i], ans[1] = arr[j], ans[2] = arr[tmp];
      }
    }
  }
  sort(ans, ans + 3);
  for(int i = 0; i < 3; i++) cout << ans[i] << ' ';
  return 0;
}