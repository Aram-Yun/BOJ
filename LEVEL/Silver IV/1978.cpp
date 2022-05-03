#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, tmp, cnt = 0;
  cin >> N;
  while(N--) {
    cin >> tmp;
    for(int i = 1; i <= 1'000; i++) if(tmp % i == 0) {
      if(i == tmp) cnt++;
      break;
    }
  }
  cout << cnt;
  return 0;
}