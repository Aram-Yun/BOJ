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
  int n, m, cnt = 0;
  int arr[n * m] = {0, };
  for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) {
    int tmp;
    cin >> tmp;
    if(tmp == 9) ++arr[i], ++arr[n + j], ++cnt;
  }
  cout << cnt - *max_element(arr, arr + n * m);
}