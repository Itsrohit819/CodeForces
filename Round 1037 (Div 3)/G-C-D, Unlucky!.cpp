#include <bits/stdc++.h>
using namespace std;
#define int long long

int g(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) {
    return a / g(a, b) * b;
}

void go() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), s(n), a(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
        }

        for (int i = 0; i < n; ++i) {
            a[i] = lcm(p[i], s[i]);
        }

        vector<int> pr(n), sf(n);
        pr[0] = a[0];
        for (int i = 1; i < n; ++i) {
            pr[i] = g(pr[i - 1], a[i]);
        }
        sf[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            sf[i] = g(a[i], sf[i + 1]);
        }

        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (pr[i] != p[i] || sf[i] != s[i]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    go();
}
