#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define eb emplace_back
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;

int main(void) {
  fastio;
  int T;
  cin >> T;
  vector<pair<double, double>> v;
  for(int i = 0; i < T; i++) {
    int a, b;
    cin >> a >> b;
    v.eb(make_pair(a, b));
  }
  for(int i = 0; i < T; i++) {
    double bmi = v[i].se / ((v[i].fi / 100) * (v[i].fi / 100));
cout << bmi << endl;
    if(v[i].fi <= 140) {cout << 6 << endl; continue;}
    else if(v[i].fi < 146) {cout << 5 << endl; continue;}
    else if(v[i].fi < 159) {cout << 4 << endl; continue;}
    else if(v[i].fi < 161) {
      if(bmi >= 16 and bmi < 35) cout << 3 << endl;
      else cout << 4 << endl;
    }
    else if(v[i].fi < 204) {
      if(bmi >= 20 and bmi < 25) {cout << 1 << endl; continue;}
      if(bmi >= 18.5 and bmi < 20) {cout << 2 << endl; continue;}
      if(bmi >= 25 and bmi < 30) {cout << 2 << endl; continue;}
      if(bmi >= 16 and bmi < 18.5) {cout << 3 << endl; continue;}
      if(bmi >= 30 or bmi < 35) {cout << 3 << endl; continue;}
      else cout << 4 << endl;
    }
    else cout << 4 << endl;
  }
}