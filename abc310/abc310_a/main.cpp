#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n);
    for (auto &i : d) cin >> i;
    sort(d.begin(), d.end());

    int ans = min(p, q+d[0]);
    cout << ans << endl;
    return 0;
}