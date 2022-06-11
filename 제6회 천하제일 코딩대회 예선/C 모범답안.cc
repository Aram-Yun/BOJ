#include <bits/stdc++.h>
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main() {
	fastio;
	int TC;	cin >> TC;
	while(TC--) {
		int N;	cin >> N;
		bool valid = true;
		for(int i = 1, prev = 0; i <= N; ++i) {
			int x;	cin >> x;
			if(x > N - x + 1)	x = N - x + 1;
			valid &= (prev <= N - x + 1);
			prev = (prev <= x ? x : N - x + 1);
		}
		cout << (valid ? "YES" : "NO") << endl;
	}
	return 0;
}