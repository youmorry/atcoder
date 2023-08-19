#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int m; cin >> m;
    int sumd = 0;
    vector<int> d(m);
    for (auto &i : d) {
        cin >> i;
        sumd += i;
    }

    int h = (sumd+1) / 2;

    for (int i = 0; i < m; i++) {
        if (d[i] < h) {
            h -= d[i];
            continue;
        }
        cout << i+1 << " " << h << endl;
        break;
    }

    return 0;
}