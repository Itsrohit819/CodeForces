#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
	cin >> t;
    while (t--) {
        int n; cin >> n;
        int z1 = 0, z2 = 0, o1 = 0, o2 = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            int a, c, d, e; 
			cin >> a >> c >> d >> e;
            int x = a - d, y = c - e;
            if (x > 0) z1 += x; else z2 -= x;
            if (y > 0) o1 += y; else o2 -= y;
            if (c > e) b += min(a, d);
        }
        cout << max(z1, z2) + max(o1, o2) + b << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
