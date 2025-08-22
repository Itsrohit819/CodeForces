#include<bits/stdc++.h>
#define int long long
using namespace std;

//--------------defender087--------------\\

int sum(int d){
    int p=1;
    for(int i=0;i<d-1;i++){
        p*=10;
    }
    return 45*d*p;
}

int tot(int n){
    if(n<=0){
        return 0;
    }
    if(n<=9){
        return n*(n+1)/2;
    }
    int p=1,d=0;
    while(p*10<=n){
        p*=10;
        d++;
    }
    int m=n/p,r=n%p;
    return m*sum(d)+((m*(m-1))/2)*p+m*(r+1)+tot(r);
}

void solve(){
    int k;
    cin>>k;
    int a=0,d=1,b=1,c=9;
    while(k>0){
        int t=c*d;
        if(k>=t){
            a+=tot(b+c-1)-tot(b-1);
            k-=t;
            b*=10;
            d++;
            c=9*b;
        }else{
            int f=k/d;
            int r=k%d;
            if(f>0){
                a+=tot(b+f-1)-tot(b-1);
            }
            if(r>0){
                int n=b+f;
                string s=to_string(n);
                for(int i=0;i<r;i++){
                    a+=s[i]-'0';
                }
            }
            k=0;
        }
    }
    string res="";
    while(a>0){
        char ch='0'+(a%10);
        res=ch+res;
        a/=10;
    }
    cout<<(res.empty()?"0":res)<<"\n";
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
