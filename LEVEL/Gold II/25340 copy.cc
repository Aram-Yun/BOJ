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
  fastio;
  int TC;
  cin >> TC;
  while(TC--) {
    ll N, T;
    cin >> N >> T;
    vector<ll> A(N), B(N), C(N), D(N), E(N + 1);
    for(int i = 0; i < N; ++i) cin >> A[i] >> B[i] >> C[i] >> D[i];
    for(int i = 0; i < N + 1; ++i) cin >> E[i];
    bool flag = false, p;
    ll t = T - D[N - 1] - E[N], fi, se;
    for(int i = N - 1; i >= 0; --i) {
      ll X = (t - C[i]) / A[i];
      if(t < C[i]) {flag = true; break;}
      if(t <= C[i] + A[i] * X + B[i] - D[i]) {
        if(t != C[i] + A[i] * X) p = true;
        else if(X > 0) t = A[i] * X + C[i] + B[i] - D[i] + 1;
      }
      if(t > C[i] + A[i] * X + B[i] - D[i]) {
        if(i == N - 1) {flag = true; break;}
        if(C[i] + A[i] * (X + 1) + D[i] + E[i + 1] > fi) {
          ll tmp = C[i] + D[i] + E[i + 1];
          if(X) tmp += A[i] * (X - 1);
          if(tmp <= se) {flag = true; break;}\ 
        }
        t = C[i] + B[i] - D[i] + 1;
        if(X > 0) t += A[i] * X;
      }
      fi = C[i] + A[i] * X;
      se = C[i] + B[i] - D[i];
      if(X > 0) se += A[i] * (X - 1);
      t -= E[i];
      if(i) t -= D[i];
    }
    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;
  }
}