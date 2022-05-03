#include <bits/stdc++.h>
using namespace std;

long long up[500'001], down[500'001], ans[500'001];

int main(void) {
  int N, H;
  cin >> N >> H;
  int tmp1, tmp2;
  for(int i = 0; i < N / 2; i++) {
    cin >> tmp1 >> tmp2;
    up[tmp1]++, down[tmp2]++;
  }
  for(int i = H - 1; i > 0; i--) {
    up[i - 1] += up[i];
    down[i - 1] += down[i];
  }
  for(int i = 1, j = H; i <= H - 1 and j > 1; i++, j--) {
    ans[i] += up[i];
    ans[j] += down[i];
  }
  long long mn = ans[1];
  for(int i = 2; i <= H; i++) mn = min(mn, ans[i]);
  cout << mn << ' ' << count(ans + 1, ans + H + 1, mn); 
  return 0; 
}