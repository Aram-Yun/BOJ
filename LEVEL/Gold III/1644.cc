#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back

bool cnt[4'000'001];

int main(void) {
  int N, n, ans = 0;
  cin >> N;
  if(N == 1) {
    cout << 0;
    return 0;
  }
  for(int i = 2; i <= N; ++i) if(i * i > N) {
    n = i;
    break;
  }
  for(int i = 2; i <= n; ++i) for(int j = i * i; j <= N; j += i) cnt[j] = true;
  vector<int> v;
  for(int i = 2; i <= N; ++i) if(!cnt[i]) v.eb(i);
  int l = 0, r = 0, sum = 2;
  while(l < v.size() and r < v.size()) {
    if(sum > N) sum -= v[l++];
    else {
      if(sum == N) ++ans; 
      sum += v[++r];
    }
  }
  cout << ans;
}

//이게 왜 골3이지? 개쉬움ㄷㄷ