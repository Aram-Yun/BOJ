#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define fi first
#define se second
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;

int main(void) {
  fastio;
  double P, N;
  vector<int> v(101,  0);
  cin >> P >> N;
  while(N--) {
    int tmp1;
    char tmp2;
    cin >> tmp1 >> tmp2;
    if(tmp2 == 'L') for(int i = tmp1 - 1; i > 0; --i) v[i]++;
    else for(int i = tmp1 + 1; i <= 100; ++i) v[i]++;
  }
  double r = 0, g = 0, b = 0;
  for(int i = 1; i <= 100; ++i) {
    if(v[i] % 3 == 0) ++b;
    else if(v[i] % 3 == 1) ++r;
    else ++g;
  }
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << b * P / 100 << ' ' << r * P / 100 << ' ' << g * P / 100;
}
