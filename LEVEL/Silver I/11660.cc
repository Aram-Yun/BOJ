#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long arr[1025][1025];

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, M;
  cin >> N >> M;
  for(int i = 1; i <= N; i++) for(int j = 1; j <= N; j++) cin >> arr[i][j];
  for(int i = 1; i <= N; i++) for(int j = 1; j <= N; j++) arr[i][j] += arr[i - 1][j];
  for(int i = 1; i <= N; i++) for(int j = 1; j <= N; j++) arr[i][j] += arr[i][j - 1];
  int x1, x2, y1, y2;
  while(M--) {
    cin >> x1 >> y1 >> x2 >> y2;
    cout << arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1] << endl;
  }
  return 0;
}