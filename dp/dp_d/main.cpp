#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, w;
    cin >> n >> w;
    ll weight[101], value[101];
    for (int i = 0; i < n; i++) cin >> weight[i] >> value[i];

    vector<vector<ll>> dp(n, vector<ll>(w+1));
    dp[0][0] = 0;
    for (int i = 1; i <= w; i++) {
        if (i >= weight[0]) dp[0][i] = value[0];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            dp[i][j] = dp[i-1][j];
            if (j < weight[i]) continue;
            chmax(dp[i][j], dp[i-1][j-weight[i]] + value[i]);
        }
    }

    cout << dp[n-1][w] << endl;
    return 0;
}