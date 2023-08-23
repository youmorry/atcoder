#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for (auto nv : G[v]) {
        if (seen[nv]) continue; 
        dfs(G, nv);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    Graph G(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int count = 0;
    seen.assign(n, false);
    for (int v = 0; v < n; v++) {
        if (seen[v]) continue;
        dfs(G, v);
        ++count;
    }

    cout << m - n + count << endl;
    return 0;
}