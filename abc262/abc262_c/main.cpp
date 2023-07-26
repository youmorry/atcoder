#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<int> a(n);

    int same = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        --a[i];
        if (a[i] == i) ++same;
    }

    ll ans = (ll) same * (same-1) / 2;
    for (int i = 0; i < n; i++) {
        if (a[i] > i && a[a[i]] == i) ++ans;
    }

    cout << ans << endl;
    return 0;
}