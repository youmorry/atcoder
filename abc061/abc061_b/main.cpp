#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>());

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for (auto i : vec) {
        cout << i.size() << endl;
    }

    return 0;
}