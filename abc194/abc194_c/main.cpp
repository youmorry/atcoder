#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        ++mp[a];
    }

    ll ans = 0;
    for (auto x : mp) {
        for (auto y : mp) {
            ans += 1LL * (x.first-y.first) * (x.first-y.first) * x.second * y.second;
        }
    }
    ans /= 2;

    cout << ans << endl;
    return 0;
}