#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,k;
	cin >>n >> k;
	k--;
	string s;
	cin >> s;
	int i,j;
	for(i=k;i>=0;i--){
		if(s[i] == '#'){
			break;
		}
	}
	for(j=k;j<n;j++){
		if(s[j] == '#'){
			break;
		}
	}
	int ans=max((min(k,n-j)),(min(n-k-1,i+1)))+1;
	cout << ans << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
