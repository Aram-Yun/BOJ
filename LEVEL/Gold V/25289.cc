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
  int N, ans = 0, mx = 0, mn = 100;
  cin >> N;
  vector<int> v(N);
  for(auto& x : v) cin >> x, rmax(mx, x), rmin(mn, x);
  for(int a = 1; a <= 100; ++a) {
    for(int d = -99; d < 100; ++d) {
      int cnt = 0, n = 0;
      for(int i = 0; i < N; ++i) {
        if(a + n * d > mx or a + n * d < mn) break;
        if(v[i] == a + n * d) ++n, ++cnt;
      } 
      rmax(ans, cnt);
    }
  }
  cout << ans;
}