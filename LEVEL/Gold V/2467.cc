#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, arr[100'000];
  cin >> N;
  for(int i = 0; i < N; i++) cin >> arr[i];
  if(arr[0] > 0) cout << arr[0] << ' ' << arr[1];
  else if(arr[N - 1] < 0) cout << arr[N - 2] << ' ' << arr[N - 1];
   
  return 0;
}