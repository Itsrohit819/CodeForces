#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(b>c){
    	swap(b,c);
	}
    if(a>=b && a<=c){
    	cout << "NO\n";
	}
	else{
		cout << "YES\n";
	}
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){solve();}
}
