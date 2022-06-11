#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

vector<int> v;
int N, mx = 0;

int f(int x) {
  vector<int> tmp;
    int idx = 0;
    for(int i = 0; i < N; i++) {
      tmp.eb(v[i]);
      while(tmp[idx] + x <= mx) {
        if(*lower_bound(all(v), tmp[idx] + x) == tmp[idx] + x) ++idx, tmp.eb(tmp[idx] + x);
      }
    }
  return idx;
}

int main(void) {
  cin >> N;
  v.resize(N);
  for(auto& x : v) cin >> x, mx = max(mx, x);
  int l = 0, r = 100;
  while(l < r - 1) {
    int mid = l + r >> 1;
    if(f(mid) > f(mid + 1)) r = mid;
    else l = mid;
  }
  cout << f(r);
}