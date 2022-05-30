#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int T;
  cin >> T;
  while(T--) {
    int k, n;
    cin >> k >> n;
    vector<int> tmp1(n), tmp2(n);
    for(auto& x : tmp1) cin >> x;
    for(auto& x : tmp2) cin >> x;
    vector<int> res1, res2;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) res1.emplace_back(tmp1[i] + tmp2[j]);
    for(auto& x : tmp1) cin >> x;
    for(auto& x : tmp2) cin >> x;
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) res2.emplace_back(tmp1[i] + tmp2[j]);
    sort(res2.begin(), res2.end());
    int ans = INT_MAX;
    for(int i = 0; i < n * n; i++) {
      int tmp = lower_bound(res2.begin(), res2.end(), k - res1[i]) - res2.begin();
      if(tmp == 0) tmp++;
      if(tmp == n * n - 1 or abs(k - (res1[i] + res2[tmp - 1])) <= abs(k - (res1[i] + res2[tmp]))) tmp--;
      if(abs(k - ans) == abs(k - (res1[i] + res2[tmp]))) ans = min(ans, res1[i] + res2[tmp]);
      else if(abs(k - ans) > abs(k - (res1[i] + res2[tmp]))) ans = res1[i] + res2[tmp];
    }
    cout << ans << endl;
  }
  return 0;
}

/* 
1. lower_bound 할 때 target에 abs를 붙여 찾으려 했음
2. tmp가 벡터의 end()에 다다를 때 끝내려던 것을 n * n이 아닌 n으로 설정했음
3. 차의 절댓값이 같으면 더 작은 수를 정답으로 한다는 예외 처리를 해주지 않았음(정확히는 다른 경우의 수에서 나오는 예외들을 생각하지 못했음)
*/ 