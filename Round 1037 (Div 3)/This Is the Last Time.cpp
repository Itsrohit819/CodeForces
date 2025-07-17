#include <bits/stdc++.h>
using namespace std;
#define int long long

struct S {
    int a, b, c;
};

bool cmp(const S &x, const S &y) {
    return x.a < y.a;
}

void f() {
    int n, k;
    cin >> n >> k;
    vector<S> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].a >> v[i].b >> v[i].c;
    }

    sort(v.begin(), v.end(), cmp);
    int x = k;

    for (int i = 0; i < n; i++) {
        if (v[i].a <= x && x <= v[i].b) {
            x = max(x, v[i].c);
        }
    }

    cout << x << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        f();
    }
}
