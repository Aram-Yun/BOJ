#include <bits/stdc++.h>
using namespace std;

const int maxn = 1'000'000;
pair<int, int> arr[maxn];
int ans[maxn];

int main(void) {
  int N;
  cin >> N;
  for(int i = 0; i < N; i++) {
    scanf("%d", &arr[i].first);
    arr[i].second = i;
  }
  stable_sort(arr, arr + N);
  int x = 0;
  for(int i = 0; i < N; i++) {
    if(arr[i].first == arr[i + 1].first) ans[arr[i].second] = x;
    else ans[arr[i].second] = x++;
  }
  for(int i = 0; i < N; i++) printf("%d ", ans[i]);
  return 0;
}