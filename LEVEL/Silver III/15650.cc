#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int N, M;
bool visited[9] = {0, };
int arr[9] = {0, };

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
      arr[x] = i;
      dfs(x + 1);
      visited[i - 1] = false;
    }
  }
}

int main(void) {
  cin >> N >> M;
  dfs(0);
}