#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double X, Y;

int main(void) {
  cin >> X >> Y;
  ll l = 0, r = X + 1;
  while(l < r - 1) {
    ll mid = (l + r) / 2;
    double one = (Y + mid) * 100 / (X + mid), two = Y * 100 / X;
    if(floor(one) <= floor(two)) l = mid;
    else r = mid;
  }
  if(r == X + 1) cout << -1;
  else cout << r;
  return 0;
}