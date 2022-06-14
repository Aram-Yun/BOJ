#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

int main(void) {
  fastio;
  int N, flag = 0;
  cin >> N;
  string s;
  cin >> s;
  if(N < 26) {cout << s; return 0;}
  for(int i = 10; i < N - 11; ++i) if(s[i] == '.') {flag = 1; break;}
  if(flag) {
    for(int i = 0; i < 11; ++i) cout << s[i];
    cout << "......";
    for(int i = N - 11; i < N; ++i) cout << s[i];
  }
  else {
    for(int i = 0; i < 9; ++i) cout << s[i];
    cout << "...";
    for(int i = N - 10; i < N; ++i) cout << s[i];
  }
}