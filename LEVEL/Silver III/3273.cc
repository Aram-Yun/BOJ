#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
typedef pair<int, int> pii;
typedef long long ll;

int main(void) {
  fastio;
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto& x : v) cin >> x;
  int x;
  cin >> x;
  sort(all(v));
  v.insert(v.begin(), 0);
  int l = 0, r = n;
  ll sum = v[r];
  vector<pii> ans;
  for(int i = 0; i < n * 2; ++i) {
    if(l >= r) break;
    if(sum <= x) {if(sum == x) ans.eb(make_pair(v[l], v[r])); ++l, sum = v[l] + v[r];}
    else --r, sum = v[l] + v[r]; 
  }
  sort(all(ans));
  ans.erase(unique(all(ans)), ans.end());
  cout << ans.size();
}