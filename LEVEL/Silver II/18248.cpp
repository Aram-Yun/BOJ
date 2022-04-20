#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, M, arr[1'000][100], tmp[1'000][100];
  cin >> N >> M;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      cin >> arr[i][j];
    }
  }
  int x = 0;
  for(int m = 0; m < M; m++) {
    int sum = 0;
    for(int n = 0; n < N; n++) sum += arr[n][m];
    if(sum == 0 or sum == M or m == 0) {
      continue;
    }
    for(int n = 0; n < N; n++) {
      if(arr[n][m] < arr[n][x]) {
        for(int nn = 0; nn < N; nn++) {
          if(arr[nn][m] > arr[nn][x]) {
            cout << "NO";
            return 0;
          }
        }
      }
    }
    x++;
  }
  cout << "YES";
  return 0;
}