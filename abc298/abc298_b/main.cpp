#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

vector<vector<int>> rotate(vector<vector<int>> a) {
    auto res = a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = a[n-j-1][i];
        }
    }
    return res;    
}

int main() {
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<int>> b(n, vector<int>(n));
    for (auto &i : a) for (auto &j : i) cin >> j;
    for (auto &i : b) for (auto &j : i) cin >> j;

    int c = 4;
    while (c--) {
        bool ok = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1 && b[i][j] == 0) ok = false;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
        a = rotate(a);
    }
    
    cout << "No" << endl;
    return 0;
}