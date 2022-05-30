#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, min = INT_MAX;
  vector<int> arr;
  pair<int, int> ans;
  cin >> N;
  arr.resize(N);
  for(auto& x : arr) cin >> x;
  if(arr[N - 1] <= 0) {cout << arr[N - 2] << ' ' << arr[N - 1]; return 0;}
  if(arr[0] >= 0) {cout << arr[0] << ' ' << arr[1]; return 0;}
  for(int i = 0; i < N; i++) {
    int tmp = lower_bound(arr.begin(), arr.end(), -1 * arr[i]) - arr.begin();
    if(tmp == i) tmp = arr[i - 1] < arr[i + 1] ? i - 1 : i + 1;
    if(tmp != 0 and tmp - 1 != i and abs(arr[tmp] + arr[i]) > abs(arr[tmp - 1] + arr[i])) tmp -= 1;
    if(tmp == N and arr[i] < 0) tmp = N - 1;
    else if(tmp == N and arr[i] > 0) tmp = 0;
    if(min > abs(arr[tmp] + arr[i])) {
      min = abs(arr[tmp] + arr[i]); 
      if(arr[tmp] > arr[i]) ans = make_pair(arr[i], arr[tmp]);
      else ans = make_pair(arr[tmp], arr[i]);
    }
  }
  cout << ans.first << ' ' << ans.second;
  return 0;
}