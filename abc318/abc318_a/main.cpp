#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    int ans = 0;
    if (n >= m) {
        ++ans;
        ans += (n-m) / p;
    }

    cout << ans << endl;
    return 0;
}