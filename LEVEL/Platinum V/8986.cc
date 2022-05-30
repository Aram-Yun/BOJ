#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll N, r, l = 0;
vector<ll> v;

ll f(ll x) {
  ll ans = 0;
  for(int i = 0; i < N; i++) {
    ans += abs(v[i] - x * (i + 1));
  }
  return ans;
}

int main(void) {
  cin >> N;
  v.resize(N);
  for(auto& x : v) cin >> x;
  r = v[N - 1];
  while(l < r - 2) {
    ll p = (2 * l + r) / 3, q = (l + 2 * r) / 3;
    if(f(p) > f(q)) l = p;
    else r = q;
  }
  cout << f(r);
  return 0;
}