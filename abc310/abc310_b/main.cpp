#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> P(n);
    vector<int> C(n);
    vector<vector<int>> F(n);
    for (int i = 0; i < n; i++) {
        cin >> P[i];
        cin >> C[i];
        F[i].assign(C[i], 0);
        for (int j = 0; j < C[i]; j++) {
            cin >> F[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (P[i] < P[j]) continue;
            if (C[i] > C[j]) continue;
            bool included = true;
            for (int k = 0; k < C[i]; k++) {
               if (find(begin(F[j]), end(F[j]), F[i][k]) == end(F[j])) included = false; 
            }            
            if (!included) continue;
            if (P[i] > P[j]) {
                cout << "Yes" << endl;
                return 0;
            } else if (C[i] < C[j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}