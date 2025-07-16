#include <bits/stdc++.h>
using namespace std;
#define int long long

int get(int s) {
    int x = s;
    while (true) {
        bool ch = false;
        for (int i = 0; i < 64; i++) {
            int b = 1LL << i;
            if ((s & b) && (x & b)) {
                x += b;
                x &= ~(b - 1);
                ch = true;
                break;
            }
        }
        if (!ch) {
            break;
        }
    }
    return x;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        if (n == 1) {
            cout << l << '\n';
        } else if (n % 2 == 1) {
            if (k <= n) {
                cout << l << '\n';
            } else {
                cout << -1 << '\n';
            }
        } else {
            if (n == 2) {
                cout << -1 << '\n';
            } else {
                int c = get(l);
                if (c > r) {
                    cout << -1 << '\n';
                } else {
                    if (k <= n - 2) {
                        cout << l << '\n';
                    } else {
                        cout << c << '\n';
                    }
                }
            }
        }
    }
    return 0;
}
