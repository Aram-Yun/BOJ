#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  long long N, M, arr[1'000'001], cnt, ans = 0;
  cin >> N >> M;
  for(int i = 1; i <= N; i++) {
    cin >> arr[i];
    arr[i] += arr[i - 1];
    arr[i] %= M;
  }
  for(int i = 0; i < M; i++) {
    cnt = count(arr + 1, arr + N + 1, i);
    if(i == 0) ans += cnt;
    ans += cnt * (cnt - 1) / 2;
  }
  cout << ans;
  return 0;
}