#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void chmax(ll &x, ll y) { x = max(x, y); }

int main() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    const ll INF = 1e18;
    vector<vector<ll>> dp(n+1, vector<ll>(2, -INF));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        chmax(dp[i+1][0], dp[i][0]);
        chmax(dp[i+1][1], dp[i][1]);

        if (x[i] == 0) {
            chmax(dp[i+1][0], dp[i][0] + y[i]);
            chmax(dp[i+1][0], dp[i][1] + y[i]);
        } else {
            chmax(dp[i+1][1], dp[i][0] + y[i]);
        }
    }

    ll ans = max(dp[n][0], dp[n][1]);
    cout << ans << endl;

    return 0;
}