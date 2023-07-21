#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll x, y; cin >> x >> y;
    int ans = 1;

    while (x * 2 <= y) {
        x *= 2;
        ++ans;
    }

    cout << ans << endl;
    return 0;
}