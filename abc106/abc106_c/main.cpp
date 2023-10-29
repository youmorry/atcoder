#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string s; cin >> s;
    ll k; cin >> k;

    for (auto c : s) {
        --k;
        if (c != '1') {
            cout << c - '0' << endl;
            return 0;
        }
        if (k == 0) {
            break;
        }
    }

    cout << 1 << endl;
    return 0;
}