#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int x, y, z; cin >> x >> y >> z;
    string s; cin >> s;
    int n = (int)s.size();

    const ll INF = 1e18;
    vector dp(n+1, vector<ll>(2, INF));

    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int c = 0; c < 2; c++) {
            int a = s[i] == 'A';
            for (int nc = 0; nc < 2; nc++) {
                ll cost = (a == nc) ? x : y;
                if (c != nc) cost += z;
                dp[i+1][nc] = min(dp[i+1][nc], dp[i][c] + cost);
            }
        }
    }

    cout << min(dp[n][0], dp[n][1]) << endl;
    return 0;
}