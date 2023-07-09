#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;
    int n = n1 + n2;
    vector<vector<int>> G(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b); 
        G[b].push_back(a); 
    }

    vector<int> d1, d2;
    auto bfs = [&](int sv) {
        constexpr int INF = 1001001001;
        vector<int> dist(n, INF);
        queue<int> q;
        q.push(sv);
        dist[sv] = 0;

        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (auto u : G[v]) {
                if (dist[u] != INF) continue;
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }

        return dist;
    };

    d1 = bfs(0);
    d2 = bfs(n-1);

    int max = 1;
    {
        int mx = 0;
        for (int i = 0; i < n1; i++) chmax(mx, d1[i]);
        max += mx;
    }
    {
        int mx = 0;
        for (int i = 0; i < n2; i++) chmax(mx, d2[n1+i]);
        max += mx;
    }

    cout << max << endl;
    return 0;
}
