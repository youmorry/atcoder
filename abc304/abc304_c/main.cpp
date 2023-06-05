#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    auto is_near = [&](int a, int b) {
        int dx = x[a] - x[b];
        int dy = y[a] - y[b];
        return dx*dx + dy*dy <= d*d;
    };

    queue<int> q;
    vector<bool> ans(n);
    ans[0] = true;
    q.push(0);

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u = 0; u < n; u++) {
            if (is_near(v, u)) {
                if (ans[u]) continue;
                ans[u] = true;
                q.push(u);
            }
        } 
    }     

    for (auto i : ans) {
        if (i) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}