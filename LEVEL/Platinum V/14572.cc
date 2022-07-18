#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
#define rmax(r, x) r = max(r, x)

int main(void) {
  fastio;
  int N, K, D, ans = 0;
  cin >> N >> K >> D;
  vector<pair<int, vector<int>>> v(N);
  for(int i = 0; i < N; ++i) {
    int s;
    cin >> s;
    vector<int> tmp(s);
    cin >> s;
    for(auto& x : tmp) cin >> x;
    v[i] = make_pair(s, tmp);
  } 
  sort(all(v));
  int l = 0, r = 0, A = 0, C = 0;
  int cnt[K + 1] = {0, };
  while(l <= r and r <= N and l < N) {
    if(r != N and v[r].fi - v[l].fi <= D) {
      for(int i = 0; i < v[r].se.size(); ++i) ++cnt[v[r].se[i]];
      ++r;
    }
    else {
      for(int i = 1; i <= K; ++i) {
        if(cnt[i]) ++A;
        if(cnt[i] == r - l) ++C;
      }
      rmax(ans, (A - C) * (r - l));
      for(int i = 0; i < v[l].se.size(); ++i) --cnt[v[l].se[i]];
      ++l, A = 0, C = 0;
    }
  }
  cout << ans;
}