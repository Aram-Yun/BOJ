#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void) {
  int N, M;
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N;
  vector<pair<int, int>> X;
  X.resize(N);
  for(auto& [x, y] : X) cin >> x >> y;
  cin >> M;
  vector<pair<ll, ll>> Ysum;
  Ysum.resize(M + 1);
  Ysum[0] = make_pair(INT_MIN, 0);
  for(int i = 1; i <= M; i++) {
    int one, two;
    cin >> one >> two;
    Ysum[i] = make_pair(one, two);
    Ysum[i].second += Ysum[i - 1].second;
  }
  int a, b;
  ll ans = 0;
  cin >> a >> b;
  for(int i = 0; i < N; i++) {
    int tmp = lower_bound(Ysum.begin(), Ysum.end(), make_pair(X[i].first + b + 1, 0), 
      [](const pair<ll, ll> &a, const pair<ll, ll> &b){return a.first < b.first;}
    ) - Ysum.begin() - 1;
    ans += Ysum[tmp].second * X[i].second;
    tmp = lower_bound(Ysum.begin(), Ysum.end(), make_pair(X[i].first + a, 0), 
      [](const pair<ll, ll> &a, const pair<ll, ll> &b){return a.first < b.first;}
    ) - Ysum.begin() - 1;
    ans -= Ysum[tmp].second * X[i].second;
  }
  cout << ans;
  return 0;
}