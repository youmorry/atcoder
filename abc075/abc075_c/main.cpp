#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using graph = vector<vector<bool>>;
int n, m;

vector<int> seen;
void dfs(const graph &G, int v) {
    seen[v] = true;
    for (int i = 0; i < n; i++) {
        if (!G[v][i]) continue;
        if (seen[i]) continue;
        dfs(G, i);
    }
}

int main() {
    cin >> n >> m;

    vector<int> A(m);
    vector<int> B(m);

    graph G(n, vector<bool>(n));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;

        A[i] = a;
        B[i] = b;

        G[a][b] = true;
        G[b][a] = true;
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        G[A[i]][B[i]] = false;
        G[B[i]][A[i]] = false;

        seen.assign(n, false);
        dfs(G, 0);

        bool ok = true;
        for (auto b : seen) if(!b) ok = false;
        if (!ok) ++ans;

        G[A[i]][B[i]] = true;
        G[B[i]][A[i]] = true;
    }

    cout << ans << endl;
    return 0;
}