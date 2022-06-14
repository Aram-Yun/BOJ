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
  int N, ans = 1;
  cin >> N;
  if(N == 1) {cout << "권병장님, 중대장님이 찾으십니다"; return 0;}
  vector<int> pos(N);
  for(auto& x : pos) cin >> x;
  int max_dis = 0, dis = 0;
  for(int i = 0; i < N - 1; i++) {
    cin >> dis;
    if(max_dis < pos[i] + dis) max_dis = pos[i] + dis;
    if(pos[i + 1] > max_dis) ans = 0;
  }
  if(ans) cout << "권병장님, 중대장님이 찾으십니다";
  else cout << "엄마 나 전역 늦어질 것 같아";
} 

// 바로 오른쪽 사람에게 수류탄을 넘기라는 조건은 없었는데 그 사실을 인지하지 못해 무려 14트만에 맞은...