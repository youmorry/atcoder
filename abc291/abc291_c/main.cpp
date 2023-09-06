#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> d;
    d['R'] = 0;
    d['L'] = 1;
    d['U'] = 2;
    d['D'] = 3;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    map<pair<int, int>, int> visited;
    int nx = 0, ny = 0;
    ++visited[{nx, ny}];

    for (auto c : s) {
        nx += dx[d[c]];
        ny += dy[d[c]];
        ++visited[{nx, ny}];
    }

    bool ok = false;
    for (auto [k, v] : visited) {
        if (v > 1) ok = true;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}