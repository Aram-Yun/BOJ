#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n1, n2, n12;
  cin >> n1 >> n2 >> n12;
  cout << round((n1 + 1) * (n2 + 1) / (n12 + 1)) - 1;
}