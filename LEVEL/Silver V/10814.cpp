#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int N, tmp1;
  string tmp2;
  pair<int, string> arr[100'000];
  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> tmp1 >> tmp2;
    arr[i] = make_pair(tmp1, tmp2);
  }
  stable_sort(arr, arr + N, [](pair<int , string> a, pair<int, string> b){return a.first < b.first;});
  for(int i = 0; i < N; i++) cout << arr[i].first << ' ' << arr[i].second << '\n';
  return 0;
}