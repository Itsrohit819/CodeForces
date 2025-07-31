#include<bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b) {
    while(b) tie(a, b) = make_pair(b, a % b);
    return a;
}
void solve() {
    int a, b, k; 
	cin >> a >> b >> k;
    int g = gcd(a, b);
    cout << ((a/g <= k && b/g <= k) ? 1 : 2) << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0); 
	cin.tie(0);
    int t; 
	cin >> t;
    while(t--) solve();
    return 0;
}
