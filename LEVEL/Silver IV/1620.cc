#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main(void) {
  fastio;
  int N, M;
  cin >> N >> M;
  map<string, int> m;
  vector<string> v(N);
  for(auto& x : v) cin >> x;
  for(int i = 0; i < N; ++i) m.insert(make_pair(v[i], i + 1));
  for(int i = 0; i < M; ++i) {
    string tmp;
    cin >> tmp;
    int flag = 1;
    for(int i = 65; i <= 90; ++i) if((char)i == tmp[0]) {flag = 0; break;}
    if(flag) cout << v[stoi(tmp) - 1] << endl;
    else cout << m[tmp] << endl;
  }
}