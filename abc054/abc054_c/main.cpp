#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<int, vector<int>> g;

void trace(vector<int> vec, set<int> &se) {
    for (int i = 0; i < vec.size(); i++) {
        if (se.find(vec[i]) != se.end()) continue; 
        se.insert(vec[i]);
        trace(g[vec[i]], se);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    int ans = 0;
    for (int i = 0; i < g[0].size(); i++) {
        set<int> se;
        se.insert(0);
        trace(g[g[0][i]], se);
        if (se.size() == n) ++ans;
    }

    cout << ans << endl;
    return 0;
}