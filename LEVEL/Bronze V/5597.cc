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
  vector<int> v(28), ans;
  for(auto& x : v) cin >> x;
  sort(all(v));
  for(int i = 1; i <= 30; ++i) if(*lower_bound(all(v), i) != i) ans.eb(i); 
  cout << ans[0] << endl << ans[1];
}