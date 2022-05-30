#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int K, N;
vector<ll> v;

ll f(ll x) {
  ll sum = 0;
  for(int i = 0; i < K; i++) sum += v[i] / x;
  return sum;
}

int main(void) {
  cin >> K >> N;
  v.resize(K);
  for(auto& x : v) cin >> x;
  sort(v.begin(), v.end(), greater<>());
  ll l = 0, r = v[0] + 1;
  while(l < r - 1) {
    ll mid = (l + r) / 2;
    if(f(mid) < N) r = mid;
    else l = mid;
  }
  cout << l;
  return 0;
}