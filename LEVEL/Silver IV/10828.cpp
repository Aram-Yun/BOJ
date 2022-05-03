#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, tmp;
  vector<int> arr;
  string str;
  cin >> N;
  while(N--) {
    cin >> str;
    if(str == "push") {
      cin >> tmp;
      arr.insert(arr.begin(), tmp);
    }
    else if(str == "pop") {
      if(arr.size() == 0) {cout << -1 << endl;}
      else {cout << arr[0] << endl; arr.erase(arr.begin());}
    }
    else if(str == "size") {cout << arr.size() << endl;}
    else if(str == "empty") {
      if(arr.size() == 0) {cout << 1 << endl;}
      else cout << 0 << endl;
    }
    else if(str == "top") {
      if(arr.size() == 0) {cout << -1 << endl;}
      else cout << arr[0] << endl;
    }
  }
  return 0;
}