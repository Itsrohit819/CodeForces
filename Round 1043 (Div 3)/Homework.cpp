#include<bits/stdc++.h>
#define int long long
using namespace std;

//--------------defender087--------------\\

void solve(){
    int n,m;
    cin>>n;
    string s;
    cin>>s;
    cin>>m;
    string t,c;
    cin>>t>>c;
    for(int i=0;i<m;i++){
        if(c[i]=='D'){
            s+=t[i];
        }
        else{
            string x;
            x+=t[i];
            x+=s;
            s=x;
        }
    }
    cout<<s<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
}
