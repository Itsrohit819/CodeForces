#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == b) cout << 0 << '\n';
        else if (a > b) {
            if ((a & 1) && b == a - 1) cout << y << '\n';
            else cout << -1 << '\n';
        } else {
            int p = 0;
            for (int i = a; i < b; i++) {
                if (i & 1) p += x;
                else p += min(x, y);
            }
            cout << p << '\n';
        }
    }
    return 0;
}
