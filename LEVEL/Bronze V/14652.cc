#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(void) {
  ll N, M, K;
  cin >> N >> M >> K;
  ll n = 0;
  for(int i = 0; i < K; i += M) n = i / M;
  cout << n << ' ' << K % M;
}