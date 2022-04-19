#include <bits/stdc++.h>
using namespace std;

const int maxn = 10'000;

int arr[maxn] = {0, }, N;

int main(void) {
  int tmp;
  scanf("%d", &N);
  for(int i = 0; i < N; i++) {
    scanf("%d", &tmp);
    arr[tmp]++;
  }
  for(int i = 1; i < maxn; i++) {
    if(arr[i] == 0) continue;
    for(int j = 0; j < arr[i]; j++) printf("%d\n", i);
  }
  return 0;
}