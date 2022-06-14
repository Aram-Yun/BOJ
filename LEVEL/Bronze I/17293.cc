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
  int N, cnt;
  cin >> N;
  cnt = N;
  for(int i = N; i > 0; --i) {
    if(i == 1) cout << "1 bottle";
    else cout << i << " bottles";
    cout <<  " of beer on the wall, ";
    if(i == 1) cout << "1 bottle";
    else cout << i << " bottles";
    cout <<  " of beer." << endl << "Take one down and pass it around, ";
    if(i == 1) cout << "no more bottles";
    else if(i == 2) cout << "1 bottle";
    else cout << i - 1 << " bottles";
    cout << " of beer on the wall." << endl << endl;
  }
  cout << "No more bottles of beer on the wall, no more bottles of beer." << endl 
  << "Go to the store and buy some more, " << N << " bottles of beer on the wall.";
} 