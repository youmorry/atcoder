#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int M;
    cin >> M;
    vector<string> S(3);
    rep(i, 3) cin >> S[i];

    int ans = 1e9;
    rep(t0, 300) rep(t1, 300) rep(t2, 300) {
        if (t0 == t1) continue;
        if (t0 == t2) continue;
        if (t1 == t2) continue;
        if (S[0][t0%M] != S[1][t1%M]) continue;
        if (S[0][t0%M] != S[2][t2%M]) continue;
        chmin(ans, max({t0, t1, t2}));
    }

    if (ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}