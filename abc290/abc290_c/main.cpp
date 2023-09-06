#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, k;
    cin >> n >> k;
    set<int> se;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        se.insert(a);
    }

    int ans = -1;
    for (int i = 0; i < k; i++) {
        if (se.count(i) == 0) break;
        ans = i;
    }

    cout << ans+1 << endl;
    return 0;
}