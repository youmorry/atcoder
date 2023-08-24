#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());

    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i]*i;
        ans -= sum;
        sum += a[i];
    }

    cout << ans << endl;
    return 0;
}