#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    int pos = t.find(s);
    int rpos = t.rfind(s);
    bool is_prefix = pos == 0;
    bool is_sufix = rpos + n == m;

    if (is_prefix && is_sufix) {
        cout << 0 << endl;
    } else if (is_prefix) {
        cout << 1 << endl;
    } else if (is_sufix) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }

    return 0;
}