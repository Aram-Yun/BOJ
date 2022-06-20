#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

int main(void) {
  fastio;
  int N, max_len = 0;
  cin >> N;
  vector<int> arr(N);
  for(auto& x : arr) cin >> x;
  for(int i = 1; i <= 8; ++i) {
    int cnt = 0;
    for(int j = 0; j < N; ++j) {
      if(arr[j] >= i and arr[j] <= i + 2) max_len = max(max_len, ++cnt);
      else cnt = 0;
    }
  }
  if(max_len == 1) max_len = 0;
  cout << max_len;
}

