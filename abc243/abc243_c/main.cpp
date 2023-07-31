#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr int MA = 1e9;
    constexpr int MI = -1;

    int n; cin >> n;
    vector<int> x(n), y(n);
    string s;
    map<int, map<char, int>> mp;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        mp[y[i]]['R'] = MA;
        mp[y[i]]['L'] = MI;
    }
    cin >> s;

    bool ng = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') chmin(mp[y[i]]['R'], x[i]);
        else chmax(mp[y[i]]['L'], x[i]);
        if (mp[y[i]]['R'] < mp[y[i]]['L']) ng = true;
    }

    if (ng) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}