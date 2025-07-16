#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), '1');

    if (cnt <= k || 2 * k >= n + 1) cout << "ALICE\n";
    else cout << "BOB\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
