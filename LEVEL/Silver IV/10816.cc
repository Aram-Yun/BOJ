#include <bits/stdc++.h>
using namespace std;

int N, M, arr[500'000];
map<int, int> order;

int binary_search(int t) {
  int a = 0, b = N - 1;
  while(a <= b) {
    int mid = (a + b) / 2;
    if(arr[mid] == t) return mid;
    else if(arr[mid] > t) b = mid - 1;
    else a = mid + 1;
  }
  return -1;
}

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> arr[i];
    order[arr[i]] = 1;
  }
  sort(arr, arr + N);
  for(int i = 0; i < N - 1; i++) if(arr[i] == arr[i + 1]) order[arr[i]]++;
  cin >> M;
  int tmp;
  for(int i = 0; i < M; i++) {
    cin >> tmp;
    tmp = binary_search(tmp);
    if(tmp == -1) cout << 0 << ' ';
    else cout << order[arr[tmp]] << ' ';
  }
  return 0;
} 