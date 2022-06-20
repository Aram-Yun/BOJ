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
  string s1, s2;
  cin >> s1 >> s2;
  if(s1.length() < s2.length()) swap(s1, s2);
  for(int i = 0; i < s1.length() / 2; ++i) swap(s1[i], s1[s1.length() - 1 - i]);
  for(int i = 0; i < s2.length() / 2; ++i) swap(s2[i], s2[s2.length() - 1 - i]);
  string ans;
  int tmp = 0;
  for(int i = 0; i < s2.length(); ++i) {
    int sum = (int)(s1[i]) - 48 + (int)(s2[i]) - 48;
    if(tmp) {sum += tmp; tmp = 0;}
    if(sum > 9) tmp = sum / 10, sum %= 10;
    ans += to_string(sum);
    if(i == s2.length() - 1 and tmp) {
      if(s1.length() == s2.length()) ans += to_string(tmp);
      for(int j = s2.length(); j < s1.length(); ++j) {
        if((int)s1[j] - 48 + tmp > 9) tmp = ((int)s1[j] - 48 + tmp) / 10, ans += to_string(((int)s1[j] - 48 + tmp) % 10);
        else ans += to_string((int)s1[j] - 48 + tmp), tmp = 0;
        if(j == s1.length() - 1 and tmp) ans += "1"; 
      }
    }
  }
  if(ans.length() < s1.length()) for(int i = ans.length(); i < s1.length(); ++i) ans += s1[i];
  for(int i = 0; i < ans.length() / 2; ++i)  swap(ans[i], ans[ans.length() - 1 - i]);
  cout << ans;
}