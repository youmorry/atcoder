#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;
    vector<int> h(n);
    for (auto &i : h) cin >> i;
    vector<vector<int>> g(n, vector<int>());

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
    for (int i = 0; i < g.size(); i++) {
        bool ok = true;
        for (int j = 0; j < g[i].size(); j++) {
            if (h[i] <=  h[g[i][j]]) ok = false;
        }
        if (ok) ++ans;
    }

    cout << ans << endl;
    return 0;
}