#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll a, v, b, w, t;
    cin >> a >> v >> b >> w >> t;

    if (w >= v) {
        cout << "NO" << endl;
        return 0;
    }

    ll d = abs(a - b);
    if (d <= (v - w) * t) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}