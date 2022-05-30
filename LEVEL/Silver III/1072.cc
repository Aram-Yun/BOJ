#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double X, Y;

int main(void) {
  cin >> X >> Y;
  if(Y * 100 / X >= 99) {cout << -1; return 0;}
  ll l = 0, r = 2e9 + 1;
  while(l < r - 1) {
    ll mid = (l + r) / 2;
    if(floor((Y + mid) * 100 / (X + mid)) <= floor(Y * 100 / X)) l = mid;
    else r = mid;
  }
  cout << r;
  return 0;
}