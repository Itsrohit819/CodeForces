#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,k;
	cin >> n >> k;
	int a[n],sum=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum > k){
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
		return 0;
	}
	if(sum+1 == k){
		int c1=0,c2=0,c3=0;
		for(int i=0;i<n;i++){
			if(a[i]==0){
				c1++;
			}
			if(a[i]==1){
				c2++;
			}
			if(a[i]==2){
				c3++;
			}
		}
		while(c1-- > 0){
			cout << 0 << " ";
		}
		while(c3-- > 0){
			cout << 2 <<" ";
		}
		while(c2-- > 0){
			cout << 1 << " ";
		}
		cout << endl;
		return 0;
	}
	cout << -1 << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
