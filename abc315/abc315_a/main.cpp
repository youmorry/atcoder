#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string s; cin >> s;
    string ans = "";
    string a = "aeiou";
    for (auto c : s) if (a.find(c) == string::npos) ans += c; 

    cout << ans << endl;
    return 0;
}