#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	string s;
    cin >> s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s << endl;
	return 0;
}
signed main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
