#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

int main(void) {
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  for(auto& x : v) cin >> x;
  while(q--) {
    int tmp, ans = 0, ans1 = 0;
    cin >> tmp;
    if(tmp == 1) {
      int a, b;
      cin >> a >> b;
      for(int i = a; i <= b; i++) ans += i;
      cout << ans << endl;
      swap(a, b);
    }
    else {
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      for(int i = a; i <= b; i++) ans += i;
      for(int i = c; i <= d; i++) ans1 += i;
      cout << ans - ans1 << endl;
    }
  }
}