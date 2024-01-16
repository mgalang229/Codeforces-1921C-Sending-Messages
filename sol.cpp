#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n;
	ll f, a, b;
	cin >> n >> f >> a >> b;
	ll m[n];
	for (int i = 0; i < n; i++)
		cin >> m[i];
	bool ok = true;
	ll prev = 0;
	for (int i = 0; i < n; i++) {
		f -= min(a * (m[i] - prev), b);
		// cout << f << " ";
		ok &= (f > 0);
		prev = m[i];
	}
	// cout << "\n";
	cout << (ok ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--)
		solve();
}
