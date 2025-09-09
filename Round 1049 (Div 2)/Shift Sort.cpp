#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n; 
	cin >> n;
    string s; 
	cin >> s;
    int cnt = count(s.begin(), s.end(), '0');
    int x = 0;
    for(int i=0;i<cnt;i++){
		if(s[i]=='1'){
			x++;
		}
	}
    cout << x << "\n";
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
