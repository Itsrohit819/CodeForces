#include <bits/stdc++.h>
using namespace std;
#define int long long

int check(deque<int> &q, int x) {
    if (q.size() < 4) return 0;
    vector<int> v(q.begin(), q.end());
    v.push_back(x);
    int inc = 1, dec = 1;
    for (int i = v.size() - 5; i < v.size() - 1; i++) {
        if (v[i] < v[i + 1]) {
            inc++;
            dec = 1;
        } else if (v[i] > v[i + 1]) {
            dec++;
            inc = 1;
        } else {
            inc = 1;
            dec = 1;
        }
        if (inc == 5 || dec == 5) return 1;
    }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    deque<int> d(n);
    for (int i = 0; i < n; i++) cin >> d[i];
    deque<int> q;
    string s;
    q.push_back(d.front());
    s += 'L';
    d.pop_front();
    while (!d.empty()) {
        int l = d.front(), r = d.back();
        bool f1 = !check(q, l);
        bool f2 = !check(q, r);
        if (f1 && f2) {
            deque<int> ql = q, qr = q;
            ql.push_back(l);
            qr.push_back(r);
            if (ql.size() > 4){
				ql.pop_front();
			}
            if (qr.size() > 4){
				qr.pop_front();
			}
            bool flag1 = 0;
			bool flag2 = 0;
            if (d.size() >= 2) {
                int nl = d[1]; 
				int nr = d.back();
                if (!check(ql, nl) || !check(ql, nr)){
					flag1 = 1;
				}
            } 
			else{
				flag1 = 1;
			}
            if (d.size() >= 2) {
                int nl = d.front();
				int nr = d[d.size() - 2];
                if (!check(qr, nl) || !check(qr, nr)){
					flag2 = 1;
				}
            } 
			else{
				flag2 = 1;
			}
            if (!flag1){
				f1 = 0;
			}
            if (!flag2){
				f2 = 0;
			}
        }
        char ch;
        if (f1 && !f2) {
            ch = 'L';
        } else if (f2 && !f1) {
            ch = 'R';
        } else {
            if (l < r) ch = 'L';
            else ch = 'R';
        }
        if (ch == 'L') {
            q.push_back(l);
            if (q.size() > 4){
				q.pop_front();
			}
            d.pop_front();
        } else {
            q.push_back(r);
            if (q.size() > 4){
				q.pop_front();
			}
            d.pop_back();
        }
        s += ch;
    }
    cout << s << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
