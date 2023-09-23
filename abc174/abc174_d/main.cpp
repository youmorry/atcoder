#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;
    string c;
    cin >> c;

    int cr = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] == 'R') ++cr;
    }

    int ans = 0;
    for (int i = 0; i < cr; i++) {
        if (c[i] == 'W') ++ans;
    }

    cout << ans << endl;
    return 0;
}