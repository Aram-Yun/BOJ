#include <bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

int main(void) {
  fastio;
  int K;
  cin >> K;
  vector<int> v;
  for(int i = 0; i < K; ++i) {
    int tmp;
    cin >> tmp;
    if(tmp == 0) v.pop_back();
    else v.eb(tmp);
  }
  int sum = 0;
  for(auto& x : v) sum += x;
  cout << sum;
}