#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    string res = "";
    vector<int> pre(n), suf(n);

    for (int i = 0; i < n; i++)
        pre[i] = (i == 0) ? a[i] : min(pre[i - 1], a[i]);

    for (int i = n - 1; i >= 0; i--)
        suf[i] = (i == n - 1) ? a[i] : max(suf[i + 1], a[i]);

    for (int i = 0; i < n; i++)
        res += (pre[i] == a[i] || suf[i] == a[i]) ? '1' : '0';

    cout << res << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
