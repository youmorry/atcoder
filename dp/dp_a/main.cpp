#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> h(n);
    for (auto &i : h) cin >> i;

    constexpr ll INF = 1LL << 60;
    vector<ll> dp(n, INF);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i >= 1) dp[i] = min(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        if (i >= 2) dp[i] = min(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[n-1] << endl;
    return 0;
}