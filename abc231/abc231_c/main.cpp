#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    for (auto &a : A) cin >> a;
    sort(A.begin(), A.end());

    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        auto it = lower_bound(A.begin(), A.end(), x);
        if (it != A.end()) {
            auto pos = distance(A.begin(), it);
            cout << n - pos << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}