#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define all(v) v.begin(), v.end()
#define eb emplace_back
typedef long long ll;
using namespace std;

int main(void) {
  fastio;
  int L, K, C, sum, c;
  cin >> L >> K >> C;
  vector<int> v(K);
  for(auto& x: v) cin >> x;
  v.eb(0), v.eb(L);
  sort(all(v), greater<>());
  v.erase(unique(all(v)), v.end());
  int l = L, r = L + 1;
  for(int i = 0; i < K + 1; ++i) l = min(v[i] - v[i + 1], l);
  if(l) --l;
  while(l < r - 1) {
    int mid = l + r >> 1;
    sum = L, c = 0;
    int flag = 0;
    for(int i = 1; i < v.size() - 1; ++i) {
      if(sum - v[i] > mid) flag = 1;
      if(sum - v[i + 1] > mid) {
        ++c, sum = v[i];
      }
    }
    if(flag) {l = mid; continue;}
    if(c < C) ++c, sum = v[v.size() - 2];
    if(sum > mid) {l = mid; continue;}
    if(c > C) l = mid;
    else r = mid;
  }
  sum = L, c = 0;
  for(int i = 1; i < v.size() - 1; ++i) {
    if(sum - v[i + 1] > r) {
      ++c, sum = v[i];
     }
  }
  if(c < C) ++c, sum = v[v.size() - 2];
  cout << r << ' ' << sum;
  return 0;
}