#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

int main(void) {
  int T;
  cin >> T;
  while(T--) {
    int y, m, d;
    cin >> y >> m;
    if(m == 1) m = 13;
    int plus = 0;
    if(y % 100 != 0 and y % 4 == 0) ++plus;
    else if(y % 400 == 0) ++plus;
    if(m == 3 and plus) d = 29;
    else if(m == 3 and !plus) d = 28;
    else {
      if(m - 1 == 4 or m - 1 == 6 or m - 1 == 9 or m - 1 == 11) d = 30;
      else d = 31;
    }
    cout << y << ' ' << m - 1 << ' ' << d << endl;
  }
}