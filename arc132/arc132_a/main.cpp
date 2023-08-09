#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<int> R(n), C(n);
    for (auto &i : R) cin >> i;
    for (auto &i : C) cin >> i;

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int r, c; cin >> r >> c;
        --r, --c;
        if (R[r] + C[c] >= n+1) cout << '#';
        else cout << '.';
    }
    cout << endl;

    return 0;
}