#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr ll MOD = 1000000000 + 7;
    string t = "atcoder";
    int n; cin >> n;
    string s; cin >> s;

    vector<vector<ll>> dp(n+1, vector<ll>(t.size()+1));
    dp[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= t.size(); j++) {
            dp[i+1][j] += dp[i][j];
            if (j < t.size() && s[i] == t[j]) {
                dp[i+1][j+1] += dp[i][j];
            }
        }
        for (int j = 0; j <= t.size(); j++) dp[i+1][j] %= MOD;
    }

    cout << dp[n][t.size()] << endl;
    return 0;
}