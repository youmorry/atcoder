#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<set<int>> c(m);
    for (auto &i : c) {
        int cc; cin >> cc;
        for (int j = 0; j < cc; j++) {
            int a; cin >> a;
            i.insert(a);
        }
    } 

    int ans = 0;
    for (int bit = 0; bit < (1<<m); bit++) {
        set<int> se;
        for (int i = 0; i < m; i++) {
            if (!(bit & (1<<i))) continue;
            se.insert(c[i].begin(), c[i].end());
        }
        if (se.size() == n) ++ans;
    }

    cout << ans << endl;
    return 0;
}