#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define rmin(r, x) r = min(r, x)

int main(void) {
  fastio;
  int N, S, ans = 100'001;
  cin >> N >> S;
  vector<int> v(N);
  for(auto& x : v) cin >> x;
  int l = 0, r = 1, sum = v[0];
  for(int i = 0; i < N * 2; ++i) {
    if(sum < S) {
      if(r >= N) break;
      sum += v[r], ++r;
    }
    else if(sum >= S) {
      if(r != l) rmin(ans, abs(r - l));
      if(l >= N) break;
      sum -= v[l], ++l;
    }
  }
  if(ans == 100'001) cout << 0;
  else cout << ans;
}