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
  int fi[100][100], se[100][100], N, M;
  cin >> N >> M;
  for(int i = 0; i < N; ++i) for(int j = 0; j < M; ++j) cin >> fi[i][j];
  for(int i = 0; i < N; ++i) for(int j = 0; j < M; ++j) cin >> se[i][j];
  for(int i = 0; i < N; ++i) for(int j = 0; j < M; ++j) fi[i][j] += se[i][j];
  for(int i = 0; i < N; ++i) for(int j = 0; j < M; ++j) cout << fi[i][j];
}