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
  vector<int> v(6);
  for(auto& x : v) cin >> x;
  int ans[6] = {1, 1, 2, 2, 2, 8};
  for(int i = 0; i < 6; ++i) cout << ans[i] - v[i] << ' ';
}