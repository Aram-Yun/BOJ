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
  int N, pre = 0, flag = -1;
  cin >> N;
  while(N--) {
    int tmp;
    cin >> tmp;
    if(tmp > pre) {
      if(flag == 0) {cout << "NO"; return 0;}
      flag = 1;
    }
    else if(tmp < pre) flag = 0;
    else {cout << "NO"; return 0;}
    pre = tmp;
  }
  cout << "YES";
}