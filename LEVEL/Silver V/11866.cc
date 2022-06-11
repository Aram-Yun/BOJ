#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;
using namespace std;

int main(void) {
  fastio;
  int n, k;
  cin >> n >> k;
  vector<int> v;
  for(int i = 0; i < n; i++) v.eb(i + 1);
  cout << "<";
  int i = k - 1;
  while(v.size() > 0) {
    if(i >= v.size()) i = i % v.size();
    cout << v[i] << ", ";
    v.erase(v.begin() + i);
    i += 2;
  }
  cout << ">";
}