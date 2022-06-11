#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define fi first
#define se second
typedef long long ll;
using namespace std;
typedef pair<int, int> pii;

int main(void) {
  fastio;
  int N;
  vector<pii> v;
  for(int i = 0; i < N; i++) {
    int x, y; 
    cin >> x >> y;
    v.eb(make_pair(x , y));
  }
  sort(v.begin(), v.end(), [](pii a, pii b) {
    if(b.se == a.se) return a.fi < b.fi;
    else return a.se < b.se;
  });
  for(auto& x : v) cout << x.fi << ' ' << x.se << endl;
}