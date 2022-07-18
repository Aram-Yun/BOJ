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
  ll R, L, B, ans = 1;
  cin >> R >> L >> B;
  vector<ll> v(R), s(R + 1);
  for(auto& x : v) cin >> x;
  s[0] = 0;
  for(int i = 1; i <= R; ++i) s[i] = s[i - 1] + v[i - 1];
  ll l = 0, r = 0;
  while(l <= r and r < R) {
    ll mid = (l + r) >> 1, sum;
    sum = (mid - l) * v[mid] - (s[mid] - s[l]) + (s[r + 1] - s[mid + 1]) - (r - mid) * v[mid];
    if(sum <= B) rmax(ans, r - l + 1), ++r;
    else ++l; 
  }
  cout << ans;
}