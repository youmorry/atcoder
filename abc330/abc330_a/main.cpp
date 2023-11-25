#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, L;
    cin >> N >> L;

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int a; cin >> a;
        if (a >= L) ++ans;
    }

    cout << ans << endl;
    return 0;
}