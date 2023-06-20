#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector<ll> h(n);
    for (auto &i : h) cin >> i;

    constexpr ll INF = 1LL << 60;
    vector<ll> dp(n, INF);
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i-j < 0) continue;
            dp[i] = min(dp[i], dp[i-j] + abs(h[i] - h[i-j]));
        }
    }

    cout << dp[n-1] << endl;
    return 0;
}