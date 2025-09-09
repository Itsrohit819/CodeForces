#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int x;
    cin >> x;
    int y = -1;
    int p = 1;
    for(int i=1;i<=9;i++){
        p *= 10;
        int val = 9 * (p/10) - 1;
        if(x <= val){
            int m = p - 1;
            y = m - x;
            break;
        }
    }
    if(y == -1){
        y = 1e9 - 1 - x;
    }
    cout << y << "\n";
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
