#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr ll INF = 1LL << 60;
    int n; cin >> n;
    vector<ll> dp(n+1, INF);
    dp[0] = 0;
    int base = 1;

    for (int i = 1; i <= n; i++) {
        chmin(dp[i], dp[i-1] + 1);

        base = 1;
        for (int j = 0; j < 7; j++) {
            base *= 6;
            if (base <= i) chmin(dp[i], dp[i-base] + 1);
        }

        base = 1;
        for (int j = 0; j < 7; j++) {
            base *= 9;
            if (base <= i) chmin(dp[i], dp[i-base] + 1);
        }
    }

    cout << dp[n] << endl;
    return 0;
}