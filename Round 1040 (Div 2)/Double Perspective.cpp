#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    set<int> st;

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        for (int j = a[i].first; j < a[i].second; j++) {
            st.insert(j);
        }
    }

    vector<int> ans;
    for (int i = 1; i < 2 * n; i++) {
        int l = i;
        int r = 0;
        int j = 1;
        int id = 0;
        for (int k = 0; k < n; k++) {
            int x = a[k].first;
            int y = a[k].second;
            if (x == l) {
                if (y > r) {
                    r = y;
                    id = j;
                }
            }
            j++;
        }
        if (r > 0) {
            ans.push_back(id);
        }
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i + 1 == ans.size()) {
            cout << "\n";
        } else {
            cout << " ";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
