#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,d[N],p[N]; 
vector<int> g[N];
// Help from Editorial
int dfs(int u,int f){
    p[u]=f;
	d[u]=d[f]+1;
	int r=u;
    for(int v:g[u]){
		if(v!=f){
        	int x=dfs(v,u);
        	if(d[x]>d[r]){
				r=x;
			}
		}
    }
    return r;
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
		g[i].clear();
	}
    for(int i=0,u,v;i<n-1;i++){
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
    int l=dfs(1,0);
	int r=dfs(l,0);
	int u=r,v=r;
    while(u!=l){
        if(g[u].size()>=3){
            for(int x:g[u]){
				if(x!=p[u]&&x!=v){
                	cout<<p[u]<<" "<<u<<" "<<x<<"\n"; 
                	return;
            	}
            }
        }
        v=u; u=p[u];
    }
    cout<<"-1\n";
}

signed main(){
    int t;
	cin>>t;
	while(t--){
		solve();
	}
}
