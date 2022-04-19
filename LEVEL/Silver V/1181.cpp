#include <bits/stdc++.h>
using namespace std;
const int maxn = 20'000;

int main(void) {
  int N;
  string arr[maxn];
  cin >> N;
  for(int i = 0; i < N; i++) cin >> arr[i];
  stable_sort(arr, arr + N, [](string a, string b){
    if(a.size() <= b.size()) {
      if(a.size() == b.size()) return a < b; 
      else return a.size() < b.size();
    }
    });
  for(int i = 0; i < N; i++) if(i == 0 or arr[i - 1].compare(arr[i]) != 0) cout << arr[i] << '\n';
  return 0;
}