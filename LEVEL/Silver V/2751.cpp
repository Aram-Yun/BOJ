#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, arr[1'000'000];
  scanf("%d", &N);
  for(int i = 0; i < N; i++) scanf("%d", &arr[i]);
  std::sort(arr, arr + N);
  for(int i = 0; i < N; i++) printf("%d\n", arr[i]);
  return 0;
}