#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); 
	cin.tie(0);
    int t; 
	cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) cin >> p[i];
        long long ans = n * (n + 1LL) / 2;
        for (int i = 0; i + 1 < n; ++i){
            if (p[i] > p[i + 1]){
			    ans += (i + 1LL) * (n - i - 1);
			}
        }
        cout << ans << "\n";
    }
    return 0;
}
