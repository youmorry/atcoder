#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;

    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        mp[a] += b;
    }

    ll ans = 0;
    for (auto p : mp) {
        ll buy = min(m, p.second);
        ans += p.first * buy;

        m -= buy;
        if (m == 0) break;
    }

    cout << ans << endl;
    return 0;
}