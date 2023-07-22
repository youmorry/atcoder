#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, d; cin >> n >> d;
    map<int, int> free;

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < d; j++) {
            if (s[j] == 'o') ++free[j];
        }
    }

    int ans = 0;
    int tmp = 0;
    for (int i = 0; i < d; i++) {
        if (free[i] == n) ++tmp;
        else tmp = 0;
        chmax(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}