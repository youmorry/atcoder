#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string S = "atcoder";
    string s; cin >> s;

    int ans = 0;
    for (int i = 0; i < S.size(); i++) {
        int idx = s.find(S[i]);
        if (idx == i) continue;
        if (idx < i) continue;

        for (int j = 0; j < idx-i; j++) {
            swap(s[idx-j], s[idx-j-1]);
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}