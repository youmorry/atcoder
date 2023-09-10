#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int cell[9];
    for (auto &i : cell) cin >> i;
    vector<int> order(9);
    for (int i = 0; i < 9; i++) order[i] = i;
    vector<tuple<int, int, int>> row {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };
    
    int all = 0, not_bad = 0;
    do {
        ++all;
        bool flg = false;
        for (auto [a, b, c] : row) {
            if (cell[a] == cell[b] && order[c] > order[a] && order[c] > order[b]) {
                flg = true;
            } else if (cell[a] == cell[c] && order[b] > order[a] && order[b] > order[c]) {
                flg = true;
            } else if (cell[b] == cell[c] && order[a] > order[b] && order[a] > order[c]) {
                flg = true;
            }
        }
        if (!flg) ++not_bad;
    } while (next_permutation(order.begin(), order.end()));

    cout << setprecision(10);
    cout << (double) not_bad / all << endl;

    return 0;
}