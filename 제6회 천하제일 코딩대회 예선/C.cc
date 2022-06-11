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
  int T;
  cin >> T;
  while(T--) {
    int N, flag = 1;
    cin >> N;
    vector<int> v(N), ans(N);
    for(auto& x : v) cin >> x;
    ans[0] = min(v[0], N - v[0] + 1);
    for(int i = 1; i < N; i++) {
      if(v[i] >= ans[i - 1] or N - v[i] + 1 >= ans[i - 1]) {
        if(v[i] >= ans[i - 1] and N - v[i] + 1 >= ans[i - 1]) ans[i] = min(v[i], N - v[i] + 1);
        else if(v[i] >= ans[i - 1]) ans[i] = v[i];
        else ans[i] = N - v[i] + 1;
      }
      else {flag = 0; break;}
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
} 