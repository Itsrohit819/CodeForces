#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	set<int> s;
    for(int x:a){
		if(x!=-1){
			s.insert(x);
		}
	}
    if(s.size()<=1 && !s.count(0)){
		cout << "YES\n";
	}
    else{
		cout << "NO\n";
	}
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
