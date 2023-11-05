#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr int R = 9;
    vector<vector<int>> A(R, vector<int>(R));
    vector<set<int>> ROW(R);
    vector<set<int>> COL(R);

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < R; j++) {
            cin >> A[i][j];
            ROW[i].insert(A[i][j]);
            COL[j].insert(A[i][j]);
        }
    }

    bool ok = true;
    for (int i = 0; i < R; i++) {
        if (ROW[i].size() != R) ok = false;
        if (COL[i].size() != R) ok = false;
    }

    for (int i = 0; i < R; i+=3) {
        for (int j = 0; j < R; j+=3) {
            set<int> num;
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    num.insert(A[i+k][j+l]);
                }
            }
            if (num.size() != R) ok = false;
        }
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}