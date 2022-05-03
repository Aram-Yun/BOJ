#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, K, sum = 0, arr[100'001], mx = INT_MIN;
  cin >> N >> K;
  for(int i = 1; i <= N; i++) {
    cin >> arr[i];
    arr[i] += sum;
    sum = arr[i];
  }
  for(int i = K; i <= N; i++) mx = max(mx, arr[i] - arr[i - K]);
  cout << mx << endl;
  return 0;
}