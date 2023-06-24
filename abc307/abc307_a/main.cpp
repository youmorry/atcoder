#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        ll ans = 0;
        for (int j = 0; j < 7; j++) {
            ll a; cin >> a;
            ans += a;
        }
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}
