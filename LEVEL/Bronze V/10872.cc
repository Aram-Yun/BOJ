#include <iostream>
using namespace std;
typedef long long ll;

int main(void) {
  int N;
  cin >> N;
  ll ans = 1;
  for(int i = N; i > 0; --i) ans *= i;
  cout << ans;
}