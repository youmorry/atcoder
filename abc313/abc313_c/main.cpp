#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    ll sum = 0;
    rep(i, n) sum += a[i];
    vector<ll> b(n, sum/n);
    rep(i, sum%n) b[i]++;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;
    rep(i, n) ans += abs(a[i] - b[i]);

    cout << ans / 2 << endl;
    return 0;
}