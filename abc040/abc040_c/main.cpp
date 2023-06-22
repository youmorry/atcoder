#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr ll INF = 1LL << 60;
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &i : a) cin >> i;

    vector<ll> dp(n+1, INF);
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        chmin(dp[i], dp[i-1] + abs(a[i] - a[i-1]));
        if (i > 1) chmin(dp[i], dp[i-2] + abs(a[i] - a[i-2]));
    }

    cout << dp[n-1] << endl;
    return 0;
}