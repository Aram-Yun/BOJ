#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define rmax(r, x) r = max(r, x)
#define rmin(r, x) r = min(r, x)

int main(void) {
  fastio;
  int N, sum = 0, mn = 4000, mx = -4000, mcnt[4001] = {0, }, pcnt[4001] = {0, };
  cin >> N;
  vector<int> v(N);
  for(auto& x : v) {
    cin >> x, rmax(mx, x), rmin(mn, x), sum += x;
    if(x >= 0) ++pcnt[x];
    else ++mcnt[-1 * x];
  }
  sort(all(v));
  int tmp = 0;
  vector<int> f;
  tmp = *max_element(pcnt, pcnt + 4001);
  rmax(tmp, *max_element(mcnt, mcnt + 4001));
  for(int i = 0; i <= 4000; ++i) {
    if(pcnt[i] == tmp) f.eb(i);
    if(mcnt[i] == tmp) f.eb(-1 * i);
  }
  sort(all(f), greater<>());
  if(f.size() > 1) f.pop_back();
  tmp = round((double)sum / N);
  if(tmp == -0) cout << 0 << endl;
  else cout << tmp << endl;
  cout << v[N / 2] << endl << f[f.size() - 1] << endl << mx - mn;
}