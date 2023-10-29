#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for (auto &a : A) cin >> a;
    sort(A.begin(), A.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        auto itr = lower_bound(A.begin(), A.end(), A[i]+m);
        chmax(ans, (int)distance(A.begin(), itr) - i);
    }

    cout << ans << endl;
    return 0;
}