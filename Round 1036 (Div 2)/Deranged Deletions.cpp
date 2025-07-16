#include <bits/stdc++.h>
#define int long long
using namespace std;

map<int, int> c;
vector<int> v(200005);

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n;i++) {
        if(a[i] < a[i-1]) {
            cout << "YES\n";
            cout << 2 << '\n';
            cout << a[i-1] << ' ' << a[i] << '\n';
            return;
        }
    }
    cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
