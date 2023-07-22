#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    string s; cin >> s;
    set<char> se;

    for (int i = 0; i < n; i++) {
        se.insert(s[i]);
        if (se.size() == 3) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}