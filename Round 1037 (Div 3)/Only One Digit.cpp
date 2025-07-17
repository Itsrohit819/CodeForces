#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char mn = '9';
        for (char c : s) mn = min(mn, c);
        cout << (mn - '0') << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
