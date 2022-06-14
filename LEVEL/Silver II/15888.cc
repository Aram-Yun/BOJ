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
  double A, B, C, ans1, ans2;
  int ind = 0;
  cin >> A >> B >> C;
  if(B * B - 4 * A * C <= 0) {cout << "둘다틀렸근"; return 0;}
  ans1 = ((-1 * B) + sqrt(B * B -  4 * A * C)) / (2 * A);
  ans2 = ((-1 * B) - sqrt(B * B -  4 * A * C)) / (2 * A);
  ll i = 1;
  int flag = 0;
  while(true) {
    i << 1;
    if(i > ans1 or i > ans2) break;
    if(i == ans1) ++flag;
    if(i == ans2) ++flag;
    if(flag == 2) {cout << "이수근"; return 0;}
  }
  if(ceil(ans1) == ans1 and ceil(ans2) == ans2) {cout << "정수근"; return 0;}
  cout << "둘다틀렸근";
}