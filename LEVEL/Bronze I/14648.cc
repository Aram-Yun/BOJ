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
    int input;
    cin >> input;
    if(input == 1) {
      ll a, b, sum = 0;
      cin >> a >> b;
      for(int i = a; i <= b; ++i) sum += v[i - 1];
      cout << sum << endl;
      swap(v[a - 1], v[b - 1]);
    }
    else {
      ll a, b, c, d, sum = 0;
      cin >> a >> b >> c >> d;
      for(int i = a; i <= b; ++i) sum += v[i - 1];
      for(int i = c; i <= d; ++i) sum -= v[i - 1];
      cout << sum << endl;
    }
  }
}
