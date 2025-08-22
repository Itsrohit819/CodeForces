#include<bits/stdc++.h>
#define int long long
using namespace std;

//--------------defender087--------------\\

void solve(){
    int n;
    cin>>n;
    vector<int> v;
    int p=10;
    for(int k=1;k<=18;k++){
        int d=1+p;
        if(n%d==0){
            v.push_back(n/d);
        }
        p*=10;
    }
    if(v.empty()){
        cout<<0<<"\n";
    }
    else{
        sort(v.begin(),v.end());
        cout<<v.size()<<"\n";
        for(int i=0;i<v.size();i++){
            if(i){
                cout<<" ";
            }
            cout<<v[i];
        }
        cout<<"\n";
    }
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
