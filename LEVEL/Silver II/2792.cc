#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N, M;
vector<int> v;

ll f(int x) {
  ll sum = 0;
  for(int i = 0; i < M; i++) {
    sum += v[i] / x;
    if(v[i] % x != 0) sum++;
  }
  return sum;
}

int main(void) {
  cin >> N >> M;
  v.resize(M);
  for(auto& x : v) cin >> x;
  sort(v.begin(), v.end(), greater<>());
  int l = 1, r = v[0] + 1;
  while(l < r - 1) {
    int mid = (l + r) / 2;
    if(f(mid) > N) l = mid;
    else r = mid;
  }
  cout << l;
  return 0;
}