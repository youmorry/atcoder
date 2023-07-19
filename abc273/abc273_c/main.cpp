#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        ++mp[-a];
    }

    vector<int> ans;
    for (auto p : mp) ans.push_back(p.second);
    while(ans.size() < n) ans.push_back(0);

    for (auto i : ans) cout << i << endl;
    return 0;
}