#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int ans = 0;
vector<bool> seen;
void dfs(Graph &G, int v, int sum) {
    seen[v] = true;
    chmax(ans, sum);
    for (auto [nv, cost] : G[v]) {
        if (seen[nv]) continue;
        dfs(G, nv, sum+cost); 
    }
    seen[v] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    Graph G(n);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        --a, --b;
        G[a].push_back({b, c});
        G[b].push_back({a, c});
    }    

    for (int i = 0; i < n; i++) {
        seen.assign(n, false);
        dfs(G, i, 0);
    }

    cout << ans << endl;
    return 0;
}