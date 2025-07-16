#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int n, int j, int k, vector<int> &v) {
    int x = v[j - 1];
    sort(v.begin(), v.end());
    if (k == 1 && x < v[n - 1]) cout << "NO\n";
    else cout << "YES\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, j, k;
    cin >> t;
    while (t--) {
        cin >> n >> j >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        solve(n, j, k, v);
    }
    return 0;
}
