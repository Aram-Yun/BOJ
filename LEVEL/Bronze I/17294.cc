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
  ll k, d;
  cin >> k;
  d = ((k / 10) % 10) - (k % 10);
  for(ll i = 1; i < k; i *= 10) {
    if(i * 10 > k) break;
    if((k / (i * 10)) % 10 - (k / i) % 10 != d) {cout << "흥칫뿡!! <(￣ ﹌ ￣)>"; return 0;}
  }
  cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
}