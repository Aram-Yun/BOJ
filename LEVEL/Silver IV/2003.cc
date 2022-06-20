#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define endl '\n'
typedef long long ll;

int main(void) {
  int N, M, cnt = 0;
  cin >> N >> M;
  vector<int> v(N);
  for(auto& x : v) cin >> x;
  v.insert(v.begin(), 0);
  int l = 0, r = 0;
  ll sum = 0;
  for(int i = 0; i <= N * 2; ++i) {
    if(sum <= M and r + 1 <= N) ++r, sum += v[r];
    else ++l, sum -= v[l];
    if(sum == M) ++cnt;
  }
  cout << cnt;
}