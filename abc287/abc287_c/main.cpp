#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(Graph &G, int v) {
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

    if (m != n-1) {
        cout << "No" << endl;
        return 0;
    }

    for (auto g : G) {
        if (g.size() > 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    seen.assign(n, false);
    dfs(G, 0);
    for (auto s : seen) {
        if (!s) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}