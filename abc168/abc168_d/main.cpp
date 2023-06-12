#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using graph = vector<vector<int>>;

int n, m;
queue<int> que;
vector<bool> visited;

int main() {
    cin >> n >> m;
    graph G(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    visited.assign(n, false);
    que.push(0);
    visited[0] = true;
    vector<int> ans(n);

    while (!que.empty()) {
        int v = que.front(); que.pop();

        for (int j = 0; j < G[v].size(); j++) {
            int nv = G[v][j];
            if (visited[nv]) continue;

            que.push(nv);
            visited[nv] = true;
            ans[nv] = v;
        }

    }

    cout << "Yes" << endl;
    for (int i = 1; i < n; i++) cout << ans[i]+1 << endl;

    return 0;
}