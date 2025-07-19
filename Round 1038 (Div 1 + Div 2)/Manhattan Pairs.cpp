#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<pair<int,int>>& p) {
    vector<tuple<int,int,int>> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = make_tuple(p[i].first, p[i].second, i + 1);
    }
    sort(v.begin(), v.end(), [](const tuple<int,int,int>& a, const tuple<int,int,int>& b) {
        if (get<0>(a) != get<0>(b)) return get<0>(a) < get<0>(b);
        return get<1>(a) < get<1>(b);
    });
    int m = n / 2;
    vector<tuple<int,int,int>> L(m), R(m);
    for (int i = 0; i < m; i++) {
        L[i] = v[i];
        R[i] = v[i + m];
    }
    sort(L.begin(), L.end(), [](const tuple<int,int,int>& a, const tuple<int,int,int>& b) {
        return get<1>(a) < get<1>(b);
    });
    sort(R.begin(), R.end(), [](const tuple<int,int,int>& a, const tuple<int,int,int>& b) {
        return get<1>(a) > get<1>(b);
    });
    for (int i = 0; i < m; i++) {
        int ai = get<2>(L[i]);
        int bi = get<2>(R[i]);
        cout << ai << " " << bi << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int,int>> pts(n);
        for (int i = 0; i < n; i++) {
            cin >> pts[i].first >> pts[i].second;
        }
        solve(n, pts);
    }
    return 0;
}
