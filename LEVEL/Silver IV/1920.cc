#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int N, M, tmp;
int arr[100'000];

bool binary_search(int t) {
  int a = 0, b = N - 1;
  while(a <= b) {
    int mid = (a + b) / 2;
    if(arr[mid] == t) return 1;
    else if(arr[mid] > t) b = mid - 1;
    else a = mid + 1;
  }
  return 0;
}

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N;
  for(int i = 0; i < N; i++) cin >> arr[i];
  sort(arr, arr + N);
  cin >> M;
  for(int i = 0; i < M; i++) {
    cin >> tmp;
    cout << binary_search(tmp) << endl;
  }
  return 0;
}