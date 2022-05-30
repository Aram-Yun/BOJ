#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
vector<ll> a, b;
ll l = 0, r = 1e12;

ll f(ll h) {
  ll ans = 0;
  for(int i = 0; i < N; i++) {
    ans += abs(a[i] - (h + abs(N / 2 - i))) + abs(b[i] - (h + abs(N / 2 - i)));
  }
  return ans;
}

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N;
  a.resize(N), b.resize(N);
  for(auto& x : a) cin >> x;
  for(auto& x : b) cin >> x;
  while(l < r - 1) {
    ll h = (l + r) / 2;
    if(f(h) <= f(h - 1)) l = h;
    else r = h;
  }
  cout << f(l);
  return 0;
}