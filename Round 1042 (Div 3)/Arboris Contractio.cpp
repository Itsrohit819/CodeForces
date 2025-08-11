#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n; 
    cin >> n;
    vector<int> d(n+1,0), c(n+1,0);
    vector<pair<int,int>> e;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin >> x >> y;
        d[x]++; d[y]++;
        e.push_back({x,y});
    }
    if(n==2){
        cout << 0 << "\n";
        return 0;
    }
    int lf=0;
    for(int i=1;i<=n;i++){
        if(d[i]==1){
            lf++;
        }
    }
    for(int i=0;i<n-1;i++){
        int x=e[i].first, y=e[i].second;
        if(d[x]==1){
            c[y]++;
        }
        if(d[y]==1){
            c[x]++;
        }
    }
    int mx=0;
    for(int i=1;i<=n;i++){
        if(c[i]>mx){
            mx=c[i];
        }
    }
    cout << lf - mx << "\n";
    return 0;
}
signed main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
