#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    int ans = 0;
    for (auto i : a) {
        while (i % 2 == 0) {
            i /= 2;
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}