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
  int N, cnt = 1, mx = 0;
  cin >> N;
  vector<int> v(2 * N), ans(N);
  for(auto& x : v) cin >> x;
  ans.eb(v[0]);
  for(int i = 1; i < 2 * N; ++i) {
    if(v[i] == *lower_bound(ans.begin(), ans.end(), v[i]) and ans.end() != lower_bound(ans.begin(), ans.end(), v[i])) {
      --cnt, ans.erase(lower_bound(ans.begin(), ans.end(), v[i]));
    }
    else ++cnt, ans.eb(v[i]), sort(ans.begin(), ans.end());
    mx = max(cnt, mx);
  }
  cout << mx;

  // 괄호 문제 9012 와 똑같은 문제, 그런데 풀이가 떠오르지 않았음. 아마 오랜 문풀 + 늦은 시간으로 인한 두뇌 컨디션 악화 때문일 것이라 추정
}