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

//이건 결벽증이 아니라 강박증인 것 같은데...

int N, cnt = 0, flag = 0;
vector<int> v;
vector<pii> ans;

void reverse(int a, int b) {
  if(a >= b) return;
  for(int i = a, j = b; i <= j; ++i, --j) {
    swap(v[i], v[j]);
  }
  ++cnt;
  ans.eb(a + 1, b + 1);
for(auto& x : v) cout << x << ' ' ;
cout << endl;
}

int main(void) {
  fastio;
  cin >> N;
  v.resize(N);
  for(auto& x : v) cin >> x;
  for(int i = 1; i <= N; i++) for(int j = 0; j < N; j++) {
    if(v[j] = i) reverse(j, i - 1);
  }
  cout << cnt << endl;
}