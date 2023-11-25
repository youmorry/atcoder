#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> A(N);
    for (auto &i : A) cin >> i;

    for (auto a : A) {
        int x = abs(a - L);
        int y = abs(a - R);
        if (L <= a && a <= R) cout << a << " ";
        else if (x > y) cout << R << " ";
        else cout << L << " ";
    }
    cout << endl;

    return 0;
}