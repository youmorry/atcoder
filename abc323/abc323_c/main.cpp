#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> A(m);
    vector<string> S(n);
    for (int i = 0; i < m; i++) {
        int a; cin >> a;
        A[i] = {a, i};
    }
    for (auto &i : S) cin >> i;

    int ma = 0;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        int score = i+1;
        for (auto a : A) {
            if (S[i][a.second] == 'x') continue;
            score += a.first;
        }
        chmax(ma, score);
        scores[i] = score;
    }

    sort(A.rbegin(), A.rend());
    for (int i = 0; i < n; i++) {
        if (ma == scores[i]) {
            cout << 0 << endl;
            continue;
        }

        int add = 0;
        int diff = ma - scores[i];
        for (auto a : A) {
            if (S[i][a.second] == 'o') continue;
            diff -= a.first;
            ++add;
            if (diff < 0) break;
        }
        cout << add << endl;
    }

    return 0;
}