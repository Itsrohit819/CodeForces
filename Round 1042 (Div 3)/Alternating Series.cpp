#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n; 
	cin >> n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            cout << -1;
        } else {
            if(i == n){
                cout << 2;
            } else {
                cout << 3;
            }
        }
        if(i < n){
            cout << " ";
        }
    }
    cout << "\n";
    return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
