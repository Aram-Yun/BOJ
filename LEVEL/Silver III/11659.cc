#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  long long N, arr[100'001], M, a , b;
  long long ans[100'001] = {0, };
  cin >> N >> M;
  for(int i = 0; i < N; i++) {
    cin >> arr[i];
    ans[i + 1] += ans[i] + arr[i];
  }
  while(M--) {
    cin >> a >> b;
    cout << ans[b] - ans[a - 1] << endl;
  }
  return 0;
}