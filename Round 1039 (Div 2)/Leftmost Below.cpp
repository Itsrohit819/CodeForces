#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    int pm=b[0], ok=1;
    for(int i=1;i<n;i++){
        if(b[i]>2*pm-1) ok=0;
        pm=min(pm,b[i]);
    }
    cout<<(ok?"YES\n":"NO\n");
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin>>T;
    while(T--) solve();
    return 0;
}
