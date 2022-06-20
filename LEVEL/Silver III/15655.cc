#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define endl '\n'

int N, M;
int arr[8] = {0, };
bool visited[8] = {0, };
vector<int> v;

void dfs(int x) {
  if(x == M) {
    for(int i = 0; i < M - 1; ++i) if(arr[i] > arr[i + 1]) return;
    for(int i = 0; i < M; ++i) cout << arr[i] << ' ';
    cout << endl;
    return;
  }
  for(int i = 1; i <= N; ++i) {
    if(!visited[i - 1]) {
      visited[i - 1] = true;
      arr[x] = v[i - 1];
      dfs(x + 1);
      visited[i - 1] = false;
    }
  }
}

int main(void) {
  cin >> N >> M;
  v.resize(N);
  for(auto& x : v) cin >> x;
  sort(all(v));
  dfs(0);
}