#include<bits/stdc++.h>
#define int long long
using namespace std;
/* defender087 */
int solve(){
	int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<n;i++) {
        cin >> b[i];
    }
    if(a[n-1] != b[n-1]) {
        cout << "NO\n";
        return 0;
    }
    for(int i=n-2;i>=0;i--) {
        if((b[i] != a[i]) && (b[i] != (a[i] ^ a[i + 1])) && (b[i] != (a[i] ^ b[i + 1]))) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
	return 0;
}
signed main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
