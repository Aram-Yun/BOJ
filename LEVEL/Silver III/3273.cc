#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

int main(void) {
  fastio;
  int n, cnt = 0, t;
  cin >> n;
  vector<int> v(n);
  for(auto& x : v) cin >> x;
  cin >> t;
  sort(all(v));
  int l = 0, r = v.size() - 1;
  for(int i = 0; i < n * 2; ++i) {
    if(l != r and v[l] + v[r] == t) ++cnt;
    if(abs(t - v[l + 1] - v[r]) > abs(t - v[l] - v[r - 1])) --r;
    else ++l;
  }
  cout << cnt / 2;
}