#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, cnt = 5e+4;
  cin >> n;
  for(int i1 = 1; i1 * i1 <= n; ++i1) if(i1 * i1 == n) {cout << 1; return 0;}
  for(int i1 = 1; i1 * i1 <= n; ++i1) for(int i2 = 1; i2 * i2 <= n; ++i2) 
    if(i1 * i1 + i2 * i2 == n) {cout << 2; return 0;}
  for(int i1 = 1; i1 * i1 <= n; ++i1) for(int i2 = 1; i2 * i2 <= n; ++i2) for(int i3 = 1; i3 * i3 <= n; ++i3) 
    if(i1 * i1 + i2 * i2 + i3 * i3 == n) {cout << 3; return 0;}
  for(int i1 = 1; i1 * i1 <= n; ++i1) for(int i2 = 1; i2 * i2 <= n; ++i2) for(int i3 = 1; i3 * i3 <= n; ++i3) for(int i4 = 1; i4 * i4 <= n; ++i4)
    if(i1 * i1 + i2 * i2 + i3 * i3 + i4 * i4 == n) {cout << 4; return 0;}
}