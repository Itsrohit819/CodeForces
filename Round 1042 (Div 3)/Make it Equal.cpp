#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(){
	int n,k; 
    cin >> n >> k;
    vector<int> s(n), t(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    for(int i = 0; i < n; i++){
        int r = s[i] % k;
        s[i] = min(r, (k - r) % k);
    }
    for(int i = 0; i < n; i++){
        int r = t[i] % k;
        t[i] = min(r, (k - r) % k);
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "YES\n";
    } else {
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
