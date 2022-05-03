#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N;
  vector<long long> comp, comp2;
  vector<pair<int, int>> arr;
  cin >> N;
  arr.resize(N), comp.resize(N), comp2.resize(N);
  for(auto& x : arr) cin >> x.first >> x.second;
  for(int i = 0; i < N; i++) {
    comp[i] = arr[i].first - arr[i].second;
    comp2[i] = arr[i].first + arr[i].second;
  }
  sort(comp.begin(), comp.end());
  sort(comp2.begin(), comp2.end());
  for(int i = 0; i < N; i++) {
    int a = lower_bound(comp2.begin(), comp2.end(), arr[i].first - arr[i].second) - comp2.begin();
    int b = upper_bound(comp.begin(), comp.end(), arr[i].first + arr[i].second) - comp.begin();
    cout << a + 1 << ' ' << b << endl;
  }
  return 0;
}