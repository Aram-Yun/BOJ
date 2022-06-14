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
  fastio;
  int N, ans = 0;
  bool button = 0;
  cin >> N;
  while(N--) {
    double tmp = 0;
    cin >> tmp;
    if(!button and tmp != 0) ans += round(tmp), button = 1;
    else ans += floor(tmp);
  }
  cout << ans;
} 