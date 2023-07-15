#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<string> s(n);
    for (auto &i : s) cin >> i;

    int ans = 0;
    set<string> se1;
    set<string> se2;
    for (auto str : s) {
        string reversed = "";
        for (int i = str.size() - 1; i >= 0; i--) reversed += str[i];
        if (se1.count(str) > 0 || se1.count(reversed) > 0 ||
            se2.count(str) > 0 || se2.count(reversed) > 0) {
                //
        } else {
            se1.insert(str);
            se2.insert(reversed);
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}