#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a, b;
  cin >> a >> b;
  if((100 - b) * a / 100 >= 100) cout << 0;
  else cout << 1;
}