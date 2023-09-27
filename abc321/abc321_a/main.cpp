#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string n;
    cin >> n;

    if (n.size() == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    bool ok = true;
    for (int i = 0; i < n.size()-1; i++) {
        int cn = n[i] - '0';
        int nn = n[i+1] - '0';
        if (cn > nn) continue;
        ok = false; 
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}