#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n = 70;
    vector<ll> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < n+1; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;
    return 0;
}