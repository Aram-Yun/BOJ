#include <bits/stdc++.h>
#define fi first
#define se second
#define eb emplace_back
#define ep emplace
#define all(v) (v).begin(), (v).end()
#define rmin(r, x) r = min(r, x)
#define rmax(r, x) r = max(r, x)
#define ends ' '
#define endl '\n'
#define print(v) copy(all(v), ostream_iterator<int>(cout, " ")), cout << endl
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int maxn = 1e6 + 10;

int p[maxn];

int main(void) {
	fastio;
	p[1] = true;
	for(int i = 2; i < maxn; ++i) if(!p[i]) {
		for(ll j = 1LL * i * i; j < maxn; j += i)	p[j] = true;
	}

	int M, N;	cin >> M >> N;
	for(int i = M; i <= N; ++i) if(!p[i])	cout << i << endl;
	return 0;
}

// 내 풀이 382ms, 이 풀이 16ms. 예전에 cnt를 이용했던 것처럼(풀이 이름이 뭐더라?) p를 이욯앴다면 훨씬 속도가 빨랐을 것.