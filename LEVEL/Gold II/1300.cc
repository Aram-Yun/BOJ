#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N, k;
vector<ll> v;

ll f(ll x) {
  ll sum = 0;
  for(int i = 1; i <= N; i++) {
    if(x / i > N) sum += N;
    else sum += x / i;
  }
  return sum;
}

int main(void) {
  cin >> N >> k;
  ll l = 0, r = 1e10 + 1;
  while(l < r - 1) {
    ll mid = (l + r) / 2;
    if(f(mid) < k) l = mid;
    else r = mid;
  }
  cout << r;
  return 0;
}

// 하 존나 열받아 한번에 맞는거였는데 또 l = 1이라고 해서 세 번만에 맞았어 아 열받아 미쳐 세상에