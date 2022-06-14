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
  int N, ans = 0, flag = 0;
  cin >> N;
  while(N--) {
    char tmp;
    cin >> tmp;
    if(tmp == 'W') {if(N == 0) ans += 1; else flag = 1;}
    else if(tmp == 'E' and flag) flag = 0, ans += 1; 
  }
  cout << ans;
}