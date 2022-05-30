#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int N, M;
vector<int> v;

ll f(int x) {
  ll sum = 0;
  for(int i = 0; i < N; i++) {
    if(v[i] > x) sum += x;
    else sum += v[i];
  }
  return sum;
}

int main(void) {
  cin >> N;
  v.resize(N);
  for(auto& x : v) cin >> x;
  sort(v.begin(), v.end(), greater<>());
  cin >> M;
  int l = 0, r = 1e9 + 1;
  while(l < r - 1) {
    int mid = (l + r) / 2;
    if(f(mid) > M) r = mid;
    else l = mid;
  }
  cout << l;
  return 0;
}