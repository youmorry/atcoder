#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ans(n);
    set<int> A;
    for (int i = 0; i < m; i++) {
        int a; cin >> a;
        --a;
        A.insert(a);
    }

    for (int i = n-1; i >= 0; --i) {
        if (A.count(i) > 0) {
            ans[i] = 0;
        } else {
            ans[i] = ans[i+1] + 1; 
        }
    }

    for (auto a : ans) cout << a << endl;
    return 0;
}