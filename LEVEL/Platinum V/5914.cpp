#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

vector<int> tmp, arr, tmp2;
int N, idx[5][20'000];

bool compare(int a, int b) {
  int cnt = 0;
  for(int i = 0; i < 5; i++) {
    if(idx[i][a] > idx[i][b]) cnt++;
    if(cnt > 2) return a < b;
  }
  return a > b;
}

void compression(void) {
  tmp.clear(), tmp2.clear();
  for(auto& x : arr) tmp.emplace_back(x);
  sort(tmp.begin(), tmp.end());
  for(auto& x : arr) tmp2.emplace_back(lower_bound(tmp.begin(), tmp.end(), x) - tmp.begin());
  arr = tmp2;
  return;
}

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int r = 5;
  vector<int> origin;
  cin >> N;
  tmp.resize(N), tmp2.resize(N), arr.resize(N), origin.resize(N);
  while(r--) {
    for(auto& x : arr) cin >> x;
    if(r == 4) origin = arr;
    compression();
    for(int i = 0; i < N; i++) idx[4 - r][arr[i]] = i;
  }
  sort(arr.begin(), arr.end());
  stable_sort(arr.begin(), arr.end(), compare);
  sort(origin.begin(), origin.end());
  for(auto& x : arr) cout << origin[x] << endl;
  return 0;
}