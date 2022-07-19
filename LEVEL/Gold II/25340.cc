#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

int main(void) {
  fastio;
  int TC;
  cin >> TC;
  while(TC--) {
    ll N, T;
    cin >> N >> T;
    vector<ll> A(N), B(N), C(N), D(N), E(N + 1);
    for(int i = 0; i < N; ++i) cin >> A[i] >> B[i] >> C[i] >> D[i];
    for(int i = 0; i < N + 1; ++i) cin >> E[i];
    ll t, l = -1, r = 1e9 + 1;
    while(l < r - 1) {
      ll mid = l + r >> 1;
      t = E[0] + mid;
      for(int i = 0; i < N; ++i) {
        ll X;
        if(t > C[i]) X = (t - C[i]) / A[i]; 
        else X = C[i] /  A[i], t = C[i];
        if(t > C[i] + A[i] * X + B[i] - D[i]) t =  C[i] + A[i] * (X + 1);
        t += E[i + 1] + D[i];
      }
      if(t > T) r = mid;
      else if(t < T) l = mid;
      else break;
    }
    if(t == T) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}