#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<map<int, set<int>>> ans(37);

    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        for (int j = 0; j < c; j++) {
            int a; cin >> a;
            ans[a][c].insert(i);
        }
    }

    int k; cin >> k;
    if (ans[k].size() == 0) {
        cout << 0 << endl;
    } else {
        for (auto i : ans[k]) {
            cout << i.second.size() << endl;
            for (auto j : i.second) cout << j+1 << " ";
            cout << endl; 
            return 0;
        }
    }
    
    return 0;
}