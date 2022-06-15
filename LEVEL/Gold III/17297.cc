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
  int M;
  string la = "Messi Gimossi";
  cin >> M;
  vector<int> v;
  v.eb(5), v.eb(13);
  for(int i = 2; i < 41; ++i) {
    v.eb(v[i - 1] + v[i - 2] + 1);
    if(v[i] > M) break;
  }
  int i = 0;
  while(v[i] < M) ++i;
  while(i - 2 >= 0) {
    if(M == v[i - 1] + 1) {cout << "Messi Messi Gimossi"; return 0;}
    if(M <= v[i - 1]) --i;
    else M -= v[i - 1] + 1, i -= 2;
  }
  if(M == 6) cout << "Messi Messi Gimossi";
  else cout << la[M - 1];
//원리는 스스로 떠올렸으나 구현 과정에서의 예외 처리에 대한 이해가 부족했던 문제. 복습 요함.
}