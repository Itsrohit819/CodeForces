#include <bits/stdc++.h>
using namespace std;
#define int long long
//defender087
void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
    vector<int> d;
    for (int x : a) {
        int k = 0;
        int y = x;
        while (y <= c) {
            y *= 2;
            ++k;
            if (k > 60) break;
        }
        d.push_back(k);
    }
    sort(d.begin(), d.end());
    int f = 0, res = 0;
    for (int x : d) {
        if (f < x) ++f;
        else ++res;
    }
    cout << res << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
