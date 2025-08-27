#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,a,b;
	cin>>n>>a>>b;
    if((n-b)%2==0){
        if(a<=b||(a-b)%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }  
    else{
        cout<<"NO"<<endl;
    }
}
signed main(){
	int t;
    cin>>t;
    while(t--){
		solve();
	}
    return 0;
}