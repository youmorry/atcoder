#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    set<vector<int>> se;
    for (int i = 0; i < n; i++) {
        int l; cin >> l;
        vector<int> A(l);
        for (auto &a : A) cin >> a;
        se.insert(A);
    }

    cout << se.size() << endl;

    return 0;
}