#include <bits/stdc++.h>
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

const int maxn = 3e5 + 10;

int N, T, A[maxn], B[maxn], C[maxn], D[maxn], E[maxn];

bool canGo(int t, int i) {
	int X = (t - C[i]) / A[i];
	return (t >= C[i] && C[i] + A[i] * X <= t && t + D[i] <= C[i] + A[i] * X + B[i]);
}

void solve() {
	cin >> N >> T;
	for(int i = 1; i <= N; ++i)	cin >> A[i] >> B[i] >> C[i] >> D[i];
	for(int i = 0; i <= N; ++i)	cin >> E[i];

	int l = T, r = T;
	for(int i = N; i >= 1; --i) {
		l -= E[i] + D[i];
		r -= E[i] + D[i];
		if(!canGo(l, i)) {
			if(l < C[i])	l = C[i];
			int X = (l - C[i]) / A[i];
			if(!canGo(l, i))	l = C[i] + A[i] * (X + 1);
		}
		if(!canGo(r, i)) {
			if(r < C[i]) {
				cout << "NO" << endl;
				return;
			}
			int X = (r - C[i]) / A[i];
			r = C[i] + A[i] * X + B[i] - D[i];
		}
		if(l <= C[i])	l = 0;
		else if((l - C[i]) % A[i] == 0)	l = l - A[i] + B[i] - D[i] + 1;
		if(l > r) {
			cout << "NO" << endl;
			return;
		}
	}
	l -= E[0];
	r -= E[0];
	cout << (0 <= r ? "YES" : "NO") << endl;
}

int main() {
	fastio;
	int TC;	cin >> TC;
	while(TC--)	solve();
	return 0;
}