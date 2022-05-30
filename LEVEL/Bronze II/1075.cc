#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, F;
  cin >> N >> F;
  for(int i = 0; i < 100; i++) {
    if((N + i) % F == 0) {
      if(i < 10) cout << 0 << i;
      else cout << i;
      break;
    }
  }
  return 0;
}