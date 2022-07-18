#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

int main(void) {
  fastio;
  string ans = "A";
  cout << ans << endl;
  string c;
  getline(cin, c);
  while(1) {
    if(c == "ACCESS GRANTED") return 0;
    int d[4] = {c[15], c[16], c[17], 32};
    int ms = 0;
    for(int i = 0; i < 4; ++i) {
      if(d[i] == 32) {
        for(int j = i - 1, jj = 0; j >= 0; --j, ++jj) ms += pow(10, j) * (d[jj] - 48);
        break;
      }
    }
    if(ms == 5) {
      ans += "A";
      cout << ans << endl;
    }
    else {
      ms -= 14;
      if((int)ans[ms / 9] == 90) ans[ms / 9] = 'a';
      else if((int)ans[ms / 9] == 122) ans[ms / 9] = 'A';
      else if((int)ans[ms / 9] == 9) ans[ms / 9] = '1';
      else ans[ms / 9] = (char)((int)ans[ms / 9] + 1);
      cout << ans << endl;
    }
    getline(cin, c);
  }
}