#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
#define rmax(r, x) r = max(r, x)
#define rmin(r, x) r = min(r, x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

int main(void) {
  while(1) {
    int small = 0, big = 0, flag = 0;
    string s;
    getline(cin, s);
    if(s[0] == '.') return 0;
    vector<char> cur;
    cur.eb(' ');
    for(int i = 0; i < s.size(); ++i) {
      if(s[i] == '(') ++small, cur.eb(s[i]);
      else if(s[i] == ')') {--small; if(cur.back() != '(') break; cur.pop_back();}
      else if(s[i] == '[') ++big, cur.eb(s[i]);
      else if(s[i] == ']') {--big; if(cur.back() != '[') break; cur.pop_back();}
    }
    if(small or big) cout << "no" << endl;
    else cout << "yes" << endl;
  }
}