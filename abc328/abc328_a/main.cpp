#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, X;
    cin >> N >> X;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        int s; cin >> s;
        if (s <= X) ans += s;
    }

    cout << ans << endl;
    return 0;
} 