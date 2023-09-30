#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using Graph = vector<vector<pair<int, int>>>;

int main() {
    int k, n;
    cin >> k >> n;
    vector<int> A(n);
    for (auto &a : A) cin >> a;

    int ans = 1e9;
    vector<vector<int>> dist(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        // 右隣間の距離
        if (i >= n-1) dist[i][0] = A[0] + abs(k - A[i]); 
        else dist[i][0] = abs(A[i] - A[i+1]);
        // 左隣間の距離
        if (i-1 < 0) dist[i][1] = A[i] + abs(k - A[n-1]); 
        else dist[i][1] = abs(A[i] - A[i-1]);

        // 左回りの距離
        chmin(ans, abs(k - dist[i][0]));
        // 右回りの距離
        chmin(ans, abs(k - dist[i][1]));
    }

    cout << ans << endl;
    return 0;
}