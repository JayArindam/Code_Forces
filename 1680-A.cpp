#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int ans = -1;
		if ((c >= a && c <= b) || (c < a && d >= a)) {
			ans = max(c, a);
		} else {
			ans = a + c;
		}
		cout << ans << '\n';
	}
	return 0;
}