#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])<=1){
            cout<<0<<"\n";
            return;
        }
    }
    for(int i=0;i<n-2;i++){
        if(v[i]<=max(v[i+1],v[i+2]) && v[i]>=min(v[i+1],v[i+2])){
            cout<<1<<"\n";
            return;
        }
    }
    for(int i=0;i<n-2;i++){
        if(v[i+2]<=max(v[i],v[i+1]) && v[i+2]>=min(v[i],v[i+1])){
            cout<<1<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){solve();}
}
