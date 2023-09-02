#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, d, p;
    cin >> n >> d >> p;
    vector<int> f(n);
    for (auto &i : f) cin >> i;
    sort(f.begin(), f.end());

    vector<ll> v(n+1);
    for (int i = 0; i < n; i++) {
        v[i+1] = f[i] + v[i];
    }

    ll ans = v[n];
    for (int i = 0; i < 1e9; i++) {
        int day = max(0, n-i*d);
        ll total = v[day] + (ll)i*p;
        chmin(ans, total);
        if (day == 0) break;
    }

    cout << ans << endl;
    return 0;
}