#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr ll MOD = 1000000007;
    int N, M; cin >> N >> M;
    set<int> A;
    for (int i = 0; i < M; i++) {
        int a; cin >> a;
        A.insert(a);
    }

    vector<ll> dp(N+1);
    dp[0] = 1;
    if (A.count(1) == 0) dp[1] = 1;
    for (int i = 2; i < N+1; i++) {
        if (A.count(i-1) == 0) dp[i] += dp[i-1];
        if (A.count(i-2) == 0) dp[i] += dp[i-2];
        dp[i] %= MOD;
    }

    cout << dp[N] << endl;
    return 0;
}