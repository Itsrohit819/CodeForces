#include<bits/stdc++.h>
#define int long long
using namespace std;

int solve(){
	int n,k; 
	cin >> n >> k;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	int ans=0;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		ans += abs(a[i]-b[i]);
		v[i] = {min(a[i],b[i]), max(a[i],b[i])};
	}
	sort(v.begin(),v.end());
	int prev=v[0].second, gap=1e15; 
	bool flag=0;
	for(int i=1;i<n;i++){
		if(v[i].first <= prev){ 
			flag=1; 
			break; 
		}
		gap = min(gap, v[i].first - prev);
		prev = v[i].second;
	}
	if(flag){
		cout << ans << endl;
	}
	else{
		cout << ans+2*gap << endl;
	}
	return 0;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) solve();
}
