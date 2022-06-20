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
  int n, mem = 0;
  cin >> n;
  vector<int> v(n), ans;
  string rans;
  for(auto& x : v) cin >> x;
  int cnt = 1;
  for(int i = 0; i < n; ++i) {
    if(i == 0 or v[i] > cnt) {
      int tmp = cnt - 1;
      for(int j = tmp; j < v[i]; ++j) ans.eb(cnt++), rans += "+";
    }
  if(v[i] == ans.back()) cout << ans.back() << endl, ans.pop_back(), rans += "-";
  }
  if(ans.size() == 0 and cnt == n) for(int i = 0; i < rans.size(); ++i) cout << rans[i] << ' ';
  else cout << "NO";
}