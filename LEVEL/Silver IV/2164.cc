#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  queue<int> q;
  for(int i = 1; i <= N; i++) q.push(i);
  while(true) {
    q.pop();
    if(q.size() == 1) break;
    q.push(q.front());
    q.pop();
  }
  cout << q.front();
  return 0;
}