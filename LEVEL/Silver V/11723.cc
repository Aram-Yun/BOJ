#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
#define rmax(r, x) r = max(r, x)
#define rmin(r, x) r = min(r, x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

int main(void) {
  fastio;
  vector<int> v;
  int M;
  cin >> M;
  while(M--) {
    string str;
    int tmp;
    cin >> str;
    if(str == "add") cin >> tmp, v.eb(tmp);
    else if(str == "remove") {cin >> tmp; if(lower_bound(all(v), tmp) == v.end()) continue; v.erase(lower_bound(all(v), tmp));}
    else if(str == "check") cin >> tmp, cout << binary_search(all(v), tmp) << endl;
    else if(str == "toggle") {
      cin >> tmp;
      if(binary_search(all(v), tmp) == 0) v.eb(tmp);
      else v.erase(lower_bound(all(v), tmp));
    }
    else if(str == "all") {
      v.clear();
      for(int i = 1; i <= 20; ++i) v.eb(i);
    }
    else v.clear();
    sort(all(v));
    v.erase(unique(all(v)), v.end());
  }
}