#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int res = 1;
    for(int i=1;i<n;i++) {
        int g = __gcd(a[i], a[i-1]);
        int d = a[i-1]/g;
        int g2 = __gcd(res, d);
        res = (res/g2)*(d/g2)*g2;
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
