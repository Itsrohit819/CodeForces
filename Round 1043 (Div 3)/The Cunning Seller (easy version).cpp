#include<bits/stdc++.h>
#define int long long
using namespace std;

//--------------defender087--------------\\

void solve(){
    int n;
    cin>>n;
    int cur=n%3,ans=cur*3;
    int v=3,c=1;
    n-=cur;
    while(v*3<=n){
        v*=3;
        c++;
    }
    while(v>=3){
        cur=n/v;
        ans+=cur*((int)pow(3,c+1)+c*(int)pow(3,c-1));
        n-=cur*v;
        v/=3;
        c--;
    }
    cout<<ans<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
