#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    string s, t; cin >> s >> t;

    int h = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) ++h;
    }

    if (h % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }

    int c = h/2;
    int sc, tc; sc = tc = 0;
    string u = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            u += '0';
        } else {
            if (sc < c && s[i] == '0') {
                u += '0';
                ++sc;
            } else if (tc < c && t[i] == '0') {
                u += '0';
                ++tc;
            } else if (sc < c && s[i] == '1') {
                u += '1';
                ++sc;
            } else if (tc < c && t[i] == '1') {
                u += '1';
                ++tc;
            }
        }
    }

    cout << u << endl;
    return 0;
}