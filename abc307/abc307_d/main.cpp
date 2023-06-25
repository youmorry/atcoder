#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    string s; cin >> s;

    string ans;
    int depth = 0;
    for (auto c : s) {
        if (c == ')' && depth > 0) {
            while (ans.back() != '(') ans.pop_back();
            ans.pop_back();
            --depth;
        } else {
            ans += c;
            if (c == '(') ++depth;
        }
    }

    cout << ans << endl;
    return 0;
}