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
  int N, T, lotation = 0, x = 0, y = 0, pre = 0;
  cin >> N >> T;
  if(N == 0) {cout << T << ' ' << 0; return 0;}
  while(N--) {
    int tmp1;
    string tmp2;
    cin >> tmp1 >> tmp2;
    if(lotation == 0) x += tmp1 - pre, pre = tmp1;
    else if(lotation == 1) y += tmp1 - pre, pre = tmp1;
    else if(lotation == 2) y -= tmp1 - pre, pre = tmp1;
    else x -= tmp1 - pre, pre = tmp1;
    if(tmp2 == "right") {
      if(lotation == 0) lotation = 2;
      else if(lotation == 1) lotation = 0;
      else if(lotation == 2) lotation = 3;
      else lotation = 1;
    }
    else {
      if(lotation == 0) lotation = 1;
      else if(lotation == 1) lotation = 3;
      else if(lotation == 2) lotation = 0;
      else lotation = 2;
    }
  }
  if(lotation == 0) x += T - pre;
  else if(lotation == 1) y += T - pre;
  else if(lotation == 2) y -= T - pre;
  else x -= T - pre;
  cout << x << ' ' << y;
} 