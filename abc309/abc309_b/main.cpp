#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<string> a(n);
    vector<string> b;
    for (auto &i : a) cin >> i;
    b = a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j != n-1) b[i][j+1] = a[i][j];
            if (i == n-1 && j != 0) b[i][j-1] = a[i][j];
            if (j == 0 && i != 0) b[i-1][j] = a[i][j];
            if (j == n-1 && i != n-1) b[i+1][j] = a[i][j];
        }
    }

    for (auto i : b) cout << i << endl;
    return 0;
}