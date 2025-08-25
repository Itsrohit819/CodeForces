#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int low=a[n-1]-a[i]-a[j];
            int up=a[i]+a[j];
            int x=upper_bound(a.begin(),a.end(),low)-a.begin();
            int y=lower_bound(a.begin(),a.end(),up)-a.begin()-1;
            x=max(x,j+1);
            if(y+1-x>0){
				ans+=y+1-x;
			}
        }
    }
    cout<<ans<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
}
