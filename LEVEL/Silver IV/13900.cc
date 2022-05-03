#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, arr[100'001];
  long long prefix[100'001], sum = 0, ans = 0;
  cin >> N; 
  for(int i = 1; i <= N; i++) {
    cin >> arr[i];
    prefix[i] = sum + arr[i];
    sum = prefix[i];
  }
  for(int i = 1; i <= N; i++) ans += prefix[i - 1] * arr[i];
  cout << ans;
  return 0;
}