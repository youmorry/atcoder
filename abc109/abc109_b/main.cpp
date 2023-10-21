#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<string> W(n);
    for (auto &w : W) cin >> w;

    set<string> said;
    for (int i = 0; i < n; i++) {
        if (said.count(W[i]) > 0) {
            cout << "No" << endl;
            return 0;
        }

        if (i > 0) {
            if (W[i-1].back() != W[i].front()) {
                cout << "No" << endl;
                return 0;
            }
        }

        said.insert(W[i]);
    }

    cout << "Yes" << endl;
    return 0;
}