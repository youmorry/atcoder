#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<int> p(n);
    map<int, int> mp;
    int ma = 0;
    for (auto &i : p) {
        cin >> i;
        ++mp[i];
        chmax(ma, i);
    }

    if (p[0] == ma) {
        if (mp[ma] == 1) cout << 0 << endl;
        else cout << 1 << endl;
    } else {
        cout << ma - p[0] + 1 << endl;
    }

    return 0;
}