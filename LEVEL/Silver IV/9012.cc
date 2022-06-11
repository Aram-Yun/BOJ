#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;
using namespace std;

int main(void) {
  fastio;
  int n;
  cin >> n;
  while(n--) {
    string st;
    int l = 0, r = 0;
    cin >> st;
    for(int i = 0; i < st.size(); ++i) {
      if(st[i] == '(') ++l;
      else if(st[i] == ')') ++r;
      if(r == l) r = 0, l = 0;
    }
    if(!l and !r) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}