#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (auto &i : s) cin >> i;
    sort(s.begin(), s.end());

    do {
        bool ok = true;
        for (int i = 0; i < n-1; i++) {
            int c = 0;
            for (int j = 0; j < m; j++) {
                if (s[i][j] != s[i+1][j]) ++c;
            }
            if (c != 1) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << "No" << endl;
    return 0;
}