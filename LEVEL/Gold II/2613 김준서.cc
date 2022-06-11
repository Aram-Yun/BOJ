#include <bits/stdc++.h>
#define fi first
#define se second
#define eb emplace_back
#define all(v) (v).begin(), (v).end()
#define rmin(r, x) r = min(r, x);
#define rmax(r, x) r = max(r, x);
#define ends ' '
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int maxn = 3e2 + 10;
const int maxa = 1e2 + 10;

int n, m, a[maxn];

int main(void) {
	fastio;
	cin >> n >> m;
	for(int i = 1; i <= n; ++i)	cin >> a[i];
	vector<int> b;
	int st = *max_element(a + 1, a + 1 + n), ed = maxn * maxa, ans = ed;
	while(st <= ed) {
		int mid = st + ed >> 1;
		int s = 0, c = 0;
		vector<int> v;
		for(int i = 1; i <= n; ++i) {
			if(s + a[i] > mid) {
				v.eb(c);
				s = 0;
				c = 0;
			}
			++c;
			s += a[i];
		}
		v.eb(c);
		if(v.size() <= m) {
			ans = mid;
			b = v;
			ed = mid - 1;
		}
		else	st = mid + 1;
	}
	cout << ans << endl;
	int r = m - b.size();
	for(auto x : b) {
		while(r && x > 1) {
			--r;
			--x;
			cout << 1 << ends;
		}
		cout << x << ends;
	}
	return 0;
}