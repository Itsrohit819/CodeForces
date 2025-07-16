#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int res = 0, mn = 1e15;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        res += mn;
    }

    int sum = 0;
    mn = a[0];
    for(int i=1;i<n;i++) {
        sum += mn;
        mn = min(mn, a[i]);
        res = min({res, sum + a[i], sum + mn});
    }

    cout << res << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
