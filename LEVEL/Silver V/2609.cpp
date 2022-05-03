#include <iostream>
using namespace std;

int main(void) {
  int a, b, mn, mx;
  cin >> a >> b;
  mn = min(a, b);
  mx = max(a, b);
  for(int i = mn; i >= 1; i--) if(a % i == 0 and b % i == 0) {
    cout << i << endl;
    break;
  }
  for(int i = mx; i <= a * b; i++) if(i % a == 0 and i % b == 0) {
    cout << i << endl;
    break;
  }
  return 0;
}