#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
#define rmax(r, x) r = max(r, x)
#define rmin(r, x) r = min(r, x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

int main(void) {
  fastio;
  int L, K, C;
  ll Ml;
  vector<ll> v;
  cin >> L >> K >> C;
  v.eb(0);
  for(int i = 0; i < K; ++i) {ll tmp; cin >> tmp; v.eb(tmp);}
  v.eb(L);
  sort(all(v), greater<>());
  v.erase(unique(all(v)), v.end());
  ll l = L, r = L + 1;
  for(int i = 0; i < v.size() - 1; ++i) rmin(l, v[i] - v[i + 1]);
  --l;
  while(l < r - 1) {
    ll mid = l + r >> 1;
    ll p = L, c = 0;
    Ml = mid;
    bool flag = false;
    for(int i = 1; i < v.size() - 1; ++i) {
      if(p - v[i] > mid) {flag = true; break;}
      if(p - v[i + 1] > mid) {
        p = v[i], ++c;
      }
    }
    if(v[v.size() - 2] > mid) ++c, p = v[v.size() - 2];
    if(flag or c > C) l = mid;
    else r = mid;
  }
  ll p = L, c = 0;
  for(int i = 1; i < v.size() - 1; ++i) {
    if(p - v[i + 1] > r) rmax(Ml, p - v[i]), ++c, p = v[i];
  }
  if(c < C) ++c, p = v[v.size() - 2];
  rmax(Ml, p);
  cout << Ml << ' ' << p << endl;
}