#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<string> S(n);
    vector<string> T(n);
    map<string, set<int>> mp;
    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;
        S[i] = s;
        T[i] = t;
        mp[s].insert(i);
        mp[t].insert(i);
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (mp[S[i]].size() > 1 && mp[T[i]].size() > 1) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}