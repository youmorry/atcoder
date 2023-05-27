#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    for (auto &i : a) for (auto &j : i) cin >> j;

    vector<set<int>> g(n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n-1; j++) {
            int l = a[i][j]; --l;
            int r = a[i][j+1]; --r;
            g[l].insert(r);
            g[r].insert(l);
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int s = (int)g[i].size();
        ans += (n-1 - s);
    }

    cout << ans / 2 << endl;
    return 0;
}