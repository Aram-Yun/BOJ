#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define endl '\n'

int N, M;
vector<int> v, arr, cnt(1002, 0), tmp(1002, 0);

void dfs(int x) {
  if(x == M) {
    for(int i = 0; i < M - 1; ++i) if(arr[i] + 1 == arr[i + 1]) return;
    for(int i = 0; i < M; ++i) ++tmp[arr[i]];
    for(int i = 0; i < 1002; ++i) if(tmp[i] != cnt[i]) return;
    for(int i = 0; i < M; ++i) cout << arr[i] << ' ';
    cout << endl;
    exit(0);
  }
  for(int i = 1; i <= N; ++i) {
    arr[x] = v[i - 1];
    dfs(x + 1);
  }
}

int main(void) {
  cin >> N;
  M = N;
  v.resize(N), arr.resize(N);
  for(auto& x : v) cin >> x, ++cnt[x];
  sort(all(v));
  v.erase(unique(all(v)), v.end());
  N = v.size();
  dfs(0);
}