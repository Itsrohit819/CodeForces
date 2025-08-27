#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
	int n,k; 
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
    for(int i=0;i<n;i++){
		cout<<a[i]+(a[i]%(k+1))*k<<" ";
	}
    cout<<"\n";
}
signed main(){
	int t;
    cin>>t;
    while(t--){
		solve();
	}
    return 0;
}