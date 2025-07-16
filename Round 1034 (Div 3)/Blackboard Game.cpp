#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int x) {
    if (x % 4 == 0) cout << "BOB\n";
    else cout << "ALICE\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
