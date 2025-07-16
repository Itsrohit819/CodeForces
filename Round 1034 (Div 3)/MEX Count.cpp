#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), f(n + 2, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }

    int m = 0;
    while (f[m] > 0) {
        m++;
    }

    vector<int> d(n + 2, 0);
    for (int i = 0; i <= m; i++) {
        int l = f[i];
        int r = n - i;
        if (l <= r) {
            d[l]++;
            if (r + 1 <= n) {
                d[r + 1]--;
            }
        }
    }

    int cur = 0;
    for (int i = 0; i <= n; i++) {
        cur += d[i];
        cout << cur << " ";
    }
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
