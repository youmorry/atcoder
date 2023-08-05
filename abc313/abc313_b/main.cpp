#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

map<int, set<int>> res;
map<int, vector<int>> mp;

void f(set<int> &se, vector<int> ve) {
    if (ve.empty()) return;
    for (auto i : ve) {
        if (se.count(i) > 0) continue;
        se.insert(i);
        f(se, mp[i]);
    }
}

int main() {
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        --a, --b;
        mp[a].push_back(b);
    }

    for (int i = 0; i < n; i++) {
        f(res[i], mp[i]);
    }

    for (auto i : res) {
        if (i.second.size() == n -1) {
            cout << i.first + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}