#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    vector<bool> dpa(n), dpb(n);
    dpa[0] = dpb[0] = true;

    for (int i = 1; i < n; i++) {
        if (dpa[i-1]) {
            if (abs(a[i] - a[i-1]) <= k) dpa[i] = true;
            if (abs(b[i] - a[i-1]) <= k) dpb[i] = true;
        }
        if (dpb[i-1]) {
            if (abs(a[i] - b[i-1]) <= k) dpa[i] = true;
            if (abs(b[i] - b[i-1]) <= k) dpb[i] = true;
        }
    }

    if (dpa[n-1] || dpb[n-1]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}