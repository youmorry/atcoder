#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    for (auto &i : a) for (auto &j : i) cin >> j;
    
    vector<vector<int>> dp(n+1, vector<int>(3));
    for (int i = 0; i < 3; i++) dp[1][i] = a[0][i];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == k) continue;
                dp[i+1][k] = max(dp[i+1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 3; i++) {
        ans = max(ans, dp[n][i]);
    }

    cout << ans << endl;
    return 0;
}