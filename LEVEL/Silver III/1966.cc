#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
typedef pair<int, int> pii;

int main(void) {
  fastio;
  int T;
  cin >> T;
  while(T--) {
    int N, M, idx = 0;
    cin >> N >> M;
    vector<pii> v(N), ans;
    for(int i = 0; i < N; ++i) v[i].fi = i;
    for(auto& x : v) cin >> x.se;
    for(int i = 0; i < v.size();) {
    int flag = 1;
      for(int j = i; j < v.size(); ++j) {
        if(v[0].se < v[j].se) {
          v.eb(v[0]);
          flag = 0;
          break;
        }
      }
      if(flag) ans.eb(v[0]);
      v.erase(v.begin());
    }
    int res;
    for(int i = 0; i < N; ++i) if(M == ans[i].fi) res = i + 1;
    cout << res << endl;
  }
}