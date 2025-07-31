#include<bits/stdc++.h>
using namespace std;
#define int long long
int cnt(int l, int r, int d) {
    return r/d - (l-1)/d;
}
void solve() {
    int l, r; 
	cin >> l >> r;
    int tot = r - l + 1;
    int s1 = cnt(l, r, 2) + cnt(l, r, 3) + cnt(l, r, 5) + cnt(l, r, 7);
    int s2 = cnt(l, r, 6) + cnt(l, r, 10) + cnt(l, r, 14) + cnt(l, r, 15) + cnt(l, r, 21) + cnt(l, r, 35);
    int s3 = cnt(l, r, 30) + cnt(l, r, 42) + cnt(l, r, 70) + cnt(l, r, 105);
    int s4 = cnt(l, r, 210);
    cout << tot - s1 + s2 - s3 + s4 << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0); 
	cin.tie(0);
    int t; 
	cin >> t;
    while(t--) solve();
    return 0;
}
