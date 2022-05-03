#include <bits/stdc++.h>
using namespace std;

int N, cnt = 0;
long long M;
vector<long long> arr;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N >> M;
  arr.resize(N);
  for(int i = 1; i <= N; i++) {
    cin >> arr[i];
    arr[i] += arr[i - 1];
  }
  for(int i = 1; i <= N; i++) {
    if(lower_bound(arr.begin(), arr.end(), arr[i] - M) != arr.end()) cnt++;
  }
  cout << cnt;
  return 0;
}