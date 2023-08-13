#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        mp[c].push_back(i);
    }

    string ans = s;
    for (auto i : mp) {
        int si = i.second.size();
        if (si == 1) continue;
        for (int j = 0; j < si; j++) {
            if (j == 0) ans[i.second[j]] = s[i.second[si - 1]];
            else ans[i.second[j]] = s[i.second[j-1]];
        }
    }

    cout << ans << endl;
    return 0;
}