#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, M;
vector<ll> v;

ll f(ll x) {
  ll sum = 0;
  for(int i = 0; i < N; i++) if(v[i] - x > 0) sum += v[i] - x;
  return sum;
}

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N >> M;
  v.resize(N);
  for(auto& x : v) cin >> x;
  int l = 0, r = 1e9;
  while(l < r) {
    int mid = (l + r) / 2;
    if(f(mid) < M) l = mid;
    else r = mid;
  }
  cout << f(l);
  return 0;
}