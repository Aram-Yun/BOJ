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
    if(str == "push_front") {
      cin >> tmp;
      arr.insert(arr.begin(), tmp);
    }
    else if(str == "push_back") {
      cin >> tmp;
      arr.emplace_back(tmp);
    }
    else if(str == "pop_front") {
      if(arr.size() == 0) {cout << -1 << endl;}
      else {cout << arr[0] << endl; arr.erase(arr.begin());}
    }
    else if(str == "pop_back") {
      if(arr.size() == 0) {cout << -1 << endl;}
      else {cout << arr.back() << endl; arr.pop_back();}
    }
    else if(str == "size") {cout << arr.size() << endl;}
    else if(str == "empty") {
      if(arr.size() == 0) {cout << 1 << endl;}
      else cout << 0 << endl;
    }
    else if(str == "front") {
      if(arr.size() == 0) {cout << -1 << endl;}
      else cout << arr[0] << endl;
    }
    else if(str == "back") {
      if(arr.size() == 0) {cout << -1 << endl;}
      else cout << arr.back() << endl;
    }
  }
  return 0;
}