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
  int a, b;
  cin >> a >> b;
  if(a - b > 0) cout << 2 * (a - b) / b;
  else cout << -2 * (a - b) / b;
}