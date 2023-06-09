#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using Graph = vector<vector<int>>;

vector<int> visited;
void dfs(const Graph &g, int v) {
    if (visited[v]) return;
    visited[v] = true;
    for (auto nv : g[v]) dfs(g, nv);
}

int main() {
    int n, m;
    cin >> n >> m;

    Graph g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        visited.assign(n, false);
        dfs(g, i);
        for (auto i : visited) if (i) ++ans;
    }

    cout << ans << endl;
    return 0;
}