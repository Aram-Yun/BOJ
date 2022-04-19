#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  scanf("%d", &N);
  pair<int, int> arr[100'000];
  for(int i = 0; i < N; i++) scanf("%d %d", &arr[i].first, &arr[i].second);
  sort(arr, arr + N);
  for(int i = 0; i < N; i++) printf("%d %d\n", arr[i].first, arr[i].second);
  return 0;
}