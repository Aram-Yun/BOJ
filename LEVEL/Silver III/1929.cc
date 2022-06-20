#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

const int maxn = 1e6 + 1;

int cnt[maxn];

int main(void) {
  fastio;
  int M, N;
  cin >> M >> N;
  int max;
  cnt[1] = true;
  for(int i = 2; i <= N; ++i) if(i * i > N) {
    max = i; 
    break;
  }
  for(int i = 2; i < max; ++i) {
    for(int j = i * i; j <= N; j += i) cnt[j] = true;
  }
  for(int i = M; i <= N; ++i) if(!cnt[i]) cout << i << ' ';
}
