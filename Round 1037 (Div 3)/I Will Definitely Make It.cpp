#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int x = h[k - 1];
    vector<int> a = h;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int r = 1;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= r) {
            r = max(r, a[i]);
        } else if (a[i] - r <= x) {
            r = max(r, a[i]);
        } else {
            cout << "NO\n";
            return;
        }
    }

    if (r >= *max_element(h.begin(), h.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
