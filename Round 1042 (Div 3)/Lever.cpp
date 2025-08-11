#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int ans = 0;
    while(true){
        int f1 = 0, f2 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                a[i]--;
                f1 = 1;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] < b[i]){
                a[i]++;
                f2 = 1;
                break;
            }
        }
        ans++;
        if(f1 == 0){
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
