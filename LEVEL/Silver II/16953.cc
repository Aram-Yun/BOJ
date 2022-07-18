#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
  ll A, B, cnt = 0;
  cin >> A >> B;
  while(B > A) {
    if(B % 10 == 1) B /= 10;
    else B /= 2;
    ++cnt;
  }
  if(B == A) cout << cnt;
  else cout << -1;
}
