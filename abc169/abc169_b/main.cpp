#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr ll MAX = 1e18;
    int n; cin >> n;

    ll ans = 1;
    bool ng = false;
    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        if (a == 0) {
            cout << 0 << endl;
            return 0;
        }
        if (ng || MAX/ans < a) {
            ng = true;
        }
        ans *= a;
    }

    if (ng) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}