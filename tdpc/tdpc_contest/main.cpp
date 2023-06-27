#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<int> p(n);
    for (auto &i : p) cin >> i;

    vector<vector<set<int>>> dp(n+1, vector<set<int>>(2));
    dp[0][0].insert(0);
    dp[0][1].insert(0);

    for (int i = 1; i <= n; i++) {
        int pp = p[i-1];
        for (int j = 0; j < 2; j++) {
            for (auto v : dp[i-1][j]) {
                dp[i][0].insert(v);
                dp[i][1].insert(v+pp);
            }
        }
    }

    set<int> ans;
    for (auto i : dp[n]) for (auto j : i) ans.insert(j);
    cout << ans.size() << endl;

    return 0;
}