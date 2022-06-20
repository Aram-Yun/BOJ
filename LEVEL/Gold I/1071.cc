#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
#define rmax(r, x) r = max(r, x)
#define rmin(r, x) r = min(r, x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

int main(void) {
  int N;
  cin >> N;
  vector<int> v(N);
  int cnt[1002] = {0, };
  for(auto& x : v) cin >> x, ++cnt[x];
  sort(all(v));
  for(int i = 0; i <= 1000; ++i) {
    if(cnt[i] < 1) continue;
    if(cnt[i + 1] < 1) {
      for(int j = 0; j < cnt[i]; ++j) if(cnt[i] > 0) cout << i << ' '; 
      cnt[i] = 0;
    }
    else {
      int tmp = lower_bound(all(v), i + 2) - v.begin();
      if(tmp != v.size() and cnt[v[tmp]] > 0) {
        for(int j = 0; j < cnt[i]; ++j) if(cnt[i] > 0) cout << i << ' ';
        cnt[i] = 0;
        if(cnt[v[tmp]] > 0) cout << v[tmp] << ' ';
        --cnt[v[tmp]];
      }
      else {
        if(cnt[i + 1] > 0) cout << i + 1 << ' ';
        --cnt[i + 1];
      }
    }
  }
  for(int i = 999; i >= 0; --i) if(cnt[i] != 0) for(int j = 0; j < cnt[i]; ++j) cout << i << ' ';
} 

// 이게 왜 맞지??? 전에건 왜 틀렸지? 