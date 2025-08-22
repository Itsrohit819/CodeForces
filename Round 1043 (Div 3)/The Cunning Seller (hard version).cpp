#include<bits/stdc++.h>
#define int long long
using namespace std;

//--------------defender087--------------\\

int solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v,c;
    v.push_back(1);
    for(int i=1;i<=20;i++){
        v.push_back(v.back()*3);
    }
    for(int i=0;i<(int)v.size();i++){
        if(i==0){
            c.push_back(3);
        }else{
            c.push_back(v[i+1]+i*v[i-1]);
        }
    }
    vector<int> d(v.size());
    int x=n,idx=0;
    while(x>0){
        d[idx++]=x%3;
        x/=3;
    }
    int s=0;
    for(int i=0;i<(int)v.size();i++){
        s+=d[i];
    }
    if(s>k){
        cout<<-1<<"\n";
        return 0;
    }
    int m=min(k,n);
    if((m-s)%2){
        m--;
    }
    if(m<s){
        cout<<-1<<"\n";
        return 0;
    }
    int r=(m-s)/2,ans=0;
    for(int i=0;i<(int)v.size();i++){
        ans+=d[i]*c[i];
    }
    for(int i=(int)v.size()-1;i>=1&&r>0;i--){
        if(d[i]==0){
            continue;
        }
        int t=min(d[i],r);
        d[i]-=t;
        d[i-1]+=3*t;
        ans-=t*v[i-1];
        r-=t;
    }
    cout<<ans<<"\n";
    return 0;
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
