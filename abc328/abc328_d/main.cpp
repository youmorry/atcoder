#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string S; cin >> S;
    string ans = "";
    for (auto c : S) {
        ans += c;
        if (ans.size() >= 3 && ans.substr(ans.length()-3) == "ABC") {
            ans.erase(ans.begin() + (ans.length()-3), ans.end());
        }
    }
    cout << ans << endl;
    return 0;
}