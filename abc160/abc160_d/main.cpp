#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using graph = vector<vector<int>>;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    --x, --y;
    graph G(n);
    G[x].push_back(y);
    G[y].push_back(x);
    for (int i = 0; i < n-1; i++) {
        G[i].push_back(i+1);
        G[i+1].push_back(i);
    }

    queue<int> que;
    vector<int> visited(n);
    vector<int> ans(n);

    for (int i = 0; i < n-1; i++) {
        visited.assign(n, -1);
        que.push(i);
        visited[i] = 0;

        while (!que.empty()) {
            int v = que.front(); que.pop();

            for (auto nv : G[v]) {
                if (visited[nv] != -1) continue;
                que.push(nv);
                visited[nv] = visited[v] + 1;
                if (nv > i) ++ans[visited[nv]];
            }
        }
    }

    for (int i = 1; i < n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}