#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
map<int, vector<int>> g;
int ans = 0;

void trace(int v, set<int> visited) {
    visited.insert(v);
    if (visited.size() == n) ++ans;
    
    for (auto i : g[v]) {
        if (visited.find(i) != visited.end()) continue;
        trace(i, visited);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    set<int> visited;
    trace(0, visited);

    cout << ans << endl;
    return 0;
}