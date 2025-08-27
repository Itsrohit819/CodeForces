#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin>>n;
    vector<int>a(n+2,0);
    for(int i=1;i<=n;i++){
		cin>>a[i];
	}
    int ans=0;
    for(int i=2;i<=n;i+=2){
        int cur=a[i];
		int temp=a[i-1]+a[i+1];
        ans+=max(0LL,temp-cur);
        if(temp>cur){
			a[i+1]=max(0LL,a[i+1]-(temp-cur));
		}
    }
    cout<<ans<<"\n";
	return 0;
}
signed main(){
	int t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}
