#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n],sum=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==0){
			sum++;
		}
		else{
			sum += a[i];
		}
	}
	cout << sum << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
