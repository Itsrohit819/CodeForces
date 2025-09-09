#include <bits/stdc++.h>
#define int long long
using namespace std;
const int inf = 2e9;
int solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cnt+=a[i];
        }
        else{
            cnt-=a[i];
        }
    }
    int cur=0;
    int c1=-1,c2=-1,c3=-1,c4=-1;
    for(int i=0;i<n;i++){
        int p=i+1;
        if(p%2 == 1){
            if(c1 == -1){
                c1 = p;
            }
            c2 = p;
        }
        else{
            if(c3 == -1){
                c3 = p;
            }
            c4 = p;
        }
    }
    if(c3 != -1 && c4 != -1){
        cur = max(cur,c4-c3);
    }
    if(c1 != -1 && c2 != -1){
        cur = max(cur,c2-c1);
    }
    int m1 = inf;
    for(int r=1;r<=n;r++){
    	if(r%2 == 1){
            int v = r+2*a[r-1];
            if(v < m1){
                m1 = v;
            }
        }
        if(r%2 == 0){
            int v = r+2*a[r-1];
            if(m1 != inf){
                cur = max(cur,v-m1);
            }
        }
    }
    int m2 = -inf;
    for(int r=1;r<=n;r++){
    	if(r%2 == 0){
            int v = 2*a[r-1] - r;
            if(v > m2){
                m2 = v;
            }
        }
        if(r%2 == 1){
            int v = 2*a[r-1] - r;
            if(m2 != -inf){
                cur = max(cur,m2-v);
            }
        }
    }
    cout << cnt+cur << "\n";
    return 0;
}

signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
