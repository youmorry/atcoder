#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int N, L;
bool existHurdle[101010];
int T1, T2, T3;
int dp[101010];

int main() {
    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        existHurdle[x] = true;
    }
    cin >> T1 >> T2 >> T3;

    for (int i = 0; i < L+101; i++) dp[i] = INT_MAX;
    dp[0] = 0;

    for (int i = 0; i < L; i++) {
        chmin(dp[i + 1], dp[i] + T1 + (existHurdle[i + 1] ? T3 : 0));
        chmin(dp[i + 2], dp[i] + T1 + T2 + (existHurdle[i + 2] ? T3 : 0));
        chmin(dp[i + 4], dp[i] + T1 + T2 * 3 + (existHurdle[i + 4] ? T3 : 0));
    }

    int ans = dp[L];
    if (0 <= L - 1) chmin(ans, dp[L - 1] + (T1 + T2) / 2);
    if (0 <= L - 2) chmin(ans, dp[L - 2] + (T1 + T2) / 2 + T2);
    if (0 <= L - 3) chmin(ans, dp[L - 3] + (T1 + T2) / 2 + T2 * 2);
    cout << ans << endl;

    return 0;
}