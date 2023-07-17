#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<ll> a(n+1);
    for (auto &i : a) cin >> i;
    vector<ll> b(n);
    for (auto &i : b) cin >> i;
    vector<ll> r(n);
    r[0] = max(0 * 1LL, b[0] - a[0]);

    ll ans = 0;
    ans += min(b[0], a[0]);
    for (int i = 1; i < n; i++) {
        ans += min(a[i], b[i] + r[i-1]);
        r[i] = max(0 * 1LL, min(b[i], b[i] + r[i-1] - a[i]));
    }
    ans += min(r[n-1], a[n]);

    cout << ans << endl;
    return 0;
}