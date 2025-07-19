#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n == 1 || m == 1 || (n == 2 && m == 2)) cout << "NO\n";
        else cout << "YES\n";
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
