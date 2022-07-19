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
  ll N, M, Q;
  cin >> N >> M >> Q;
  vector<ll> C(M), B(M), P, W;
  for(int i = 0; i < M; ++i) {
    cin >> C[i];
    for(int j = 0; j < C[i]; ++j) {ll tmp; cin >> tmp; P.eb(tmp);}
    for(int j = 0; j < C[i]; ++j) {ll tmp; cin >> tmp; W.eb(tmp);}
    cin >> B[i];
  }
  vector<ll> Wl(M); ll Bl;
  for(int i = 0; i < M; ++i) cin >> Wl[i];
  cin >> Bl;
  ll p = 0;
  for(int i = 0; i < M; ++i) {
    B[i] *= Wl[i];
    for(int j = 0; j < C[i]; ++j) W[p++] *= Wl[i]; 
  }
  vector<ll> f(2e3, 0);
  p = 0;
  for(int i = 0; i < M; ++i) for(int j = 0; j < C[i]; ++j) {
    f[P[p] - 1] += W[p];
    ++p;
  }
  while(Q--) {
    ll sum = 0;
    vector<ll> A(N);
    for(auto& x : A) cin >> x;
    for(int i = 0; i < N; ++i) sum += f[i] * A[i];
    for(int i = 0; i < M; ++i) sum += B[i];
    sum += Bl;
    cout << sum << endl;
  }
}