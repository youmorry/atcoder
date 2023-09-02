#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;
    vector<string> map(100, string(100, '.'));

    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        for (int y = c; y < d; y++) {
            int l = b - a;
            map[y].replace(a, l, string(l, '#'));
        }
    }

    int ans = 0;
    for (auto s : map) for (auto c : s) if (c == '#') ++ans;
    cout << ans << endl;

    return 0;
}