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
  ll a, b, c, d, N, ans = 0;
  cin >> a >> b >> c >> d >> N;
  while(N--) {
    ll u, v;
    cin >> u >> v;
    if(max(a * (v - b) * (v - b) + c, d) == u) ++ans;
  }
  cout << ans;
}