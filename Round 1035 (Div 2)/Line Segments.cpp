#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, px, py, qx, qy;
        cin >> n >> px >> py >> qx >> qy;

        vector<int> a(n);
        int sum = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] > mx) {
                mx = a[i];
            }
        }

        int dx = px - qx, dy = py - qy;
        int d = dx * dx + dy * dy;

        int r1 = sum, r2;
        if (n == 0) {
            r2 = 0;
        } else {
            int rest = sum - mx;
            r2 = max(0LL, mx - rest);
        }

        if (r2 * r2 <= d && d <= r1 * r1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
