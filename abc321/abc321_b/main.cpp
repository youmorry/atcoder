#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, x;
    cin >> n >> x;
    int total = 0;
    int mi = 1e9;
    int ma = -1;

    for (int i = 0; i < n-1; i++) {
        int a;
        cin >> a;
        total += a;
        chmin(mi, a);
        chmax(ma, a);
    }

    int ans = 1e9;
    for (int i = 0; i <= 100; i++) {
        int d;
        if (i < mi) {
            d = total - ma;
        } else if (i > ma) {
            d = total - mi;
        } else {
            d = total - mi - ma + i;
        }
        if (d >= x) chmin(ans, i);
    }

    if (ans == 1e9) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}