#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);

    ll div = x / d;
    ll mi = min(div, k);

    ll ans = x - mi*d;
    if ((k - mi) % 2 == 0) cout << abs(ans) << endl;
    else cout << abs(ans - d) << endl;

    return 0;
}