#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    map<int, vector<string>> mp;

    for (int i = 0; i < m; i++) {
        int p; cin >> p;
        string s; cin >> s;
        mp[p].push_back(s);
    }

    int ac = 0;
    int wa = 0;
    for (auto [k, v] : mp) {
        int tmp = 0;
        for (auto i : v) {
            if (i == "AC") {
                wa += tmp;
                ++ac;
                break;
            } else {
                ++tmp;
            }
        } 
    }

    cout << ac << " " << wa << endl;
    return 0;
}