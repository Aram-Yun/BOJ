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
  int T;
  cin >> T;
  while(T--) {
    ll N, three[37] = {0, }, ans = 0;
    cin >> N;
    string tmp;
    tmp = bitset<37>(N).to_string();
    for(int i = 36; i >= 0; --i) if(tmp[i] == 1) ans += pow(3, i);
    cout << ans << endl;
  }
}