#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define endl '\n'

int N, M;
vector<int> v, arr(8), cnt(8);

void dfs(int x) {
  if(x == M) {
    for(int i = 0; i < N; ++i) if(count(all(arr), v[i]) > cnt[i]) return;
    for(int i = 0; i < M - 1; ++i) if(arr[i] > arr[i + 1]) return;
    for(int i = 0; i < M; ++i) cout << arr[i] << ' ';
    cout << endl;
    return;
  }
  for(int i = 1; i <= N; ++i) {
    arr[x] = v[i - 1];
    dfs(x + 1);
  }
}

int main(void) {
  cin >> N >> M;
  v.resize(N), cnt.resize(N);
  for(auto& x : v) cin >> x;
  sort(all(v));
  for(int i = 0; i < N; ++i) {if(i and v[i - 1] == v[i]) continue; cnt[i] = count(all(v), v[i]);}
  for(int i = 0; i < cnt.size(); ++i) if(cnt[i] == 0) cnt.erase(cnt.begin() + i), --i;
  v.erase(unique(all(v)), v.end());
  N = v.size();
  dfs(0);
}