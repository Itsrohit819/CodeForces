#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), p(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            p[i + 1] = p[i] + a[i];
        }
        int ans = 0, i = 0;
        while (i + k <= n) {
            if (p[i + k] - p[i] == 0) {
                ans++;
                i += k + 1;
            } else {
                i++;
            }
        }
        cout << ans << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
