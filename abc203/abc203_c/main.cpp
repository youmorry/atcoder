#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    int k;
    cin >> n >> k;
    map<ll, ll> A;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        A[a] += b;
    }

    ll ans = k;
    for (auto [k, v] : A) {
        if (ans < k) break;
        ans += v;
    }

    cout << ans << endl;
    return 0;
}