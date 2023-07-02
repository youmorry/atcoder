#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr int MOD = 1000000000 + 7;
    int s; cin >> s;
    vector<int> dp(s+1);

    dp[0] = 1, dp[1] = dp[2] = 0;
    for (int i = 3; i <= s; i++) {
        dp[i] = (dp[i-1] + dp[i-3]) % MOD;
    }

    cout << dp[s] << endl;
    return 0;
}