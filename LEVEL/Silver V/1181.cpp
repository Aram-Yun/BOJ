#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  vector<string> arr;
  string tmp;
  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> tmp;
    arr.push_back(tmp);
  }
  sort(arr.begin(), arr.end(), [](string a, string b){
    if(a.length() == b.length()) return a < b;
    else return a.length() < b.length();
    });
  arr.erase(unique(arr.begin(), arr.end()), arr.end());
  for(int i = 0; i < arr.size(); i++) cout << arr[i] << endl;
  return 0;
}