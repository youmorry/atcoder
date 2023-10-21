#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<int> W(n);
    vector<int> X(n);
    for (int i = 0; i < n; i++) {
        cin >> W[i] >> X[i];
    }

    int ans = 0;
    for (int i = 0; i <= 23; i++) {
        int t = 0;
        for (int j = 0; j < n; j++) {
            int h = X[j] + i;
            if (h >= 24) h -= 24;
            if (h >= 9 && h <= 17) t += W[j];
        }
        chmax(ans, t);
    }

    cout << ans << endl;
    return 0;
} 