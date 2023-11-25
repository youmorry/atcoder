#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll D; cin >> D;
    ll ans = 1e9;
    int r = sqrt(D);

    for (ll x = 0; x <= r+1; x++) {
        ll z = D - x*x;
        if(z < 0) {
            chmin(ans, -z);
        } else {
            ll y1 = sqrt(z);
            ll y2 = y1 + 1;
            chmin(ans, z - y1*y1);
            chmin(ans, y2*y2 - z);
        }
    }

    cout << ans << endl;
    return 0;
}