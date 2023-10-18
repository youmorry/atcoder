#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string s, t;
    cin >> s >> t;

    int m = 0;
    for (int i = 0; i < s.size() - t.size() + 1; i++) {
        int c = 0;
        for (int j = 0; j < t.size(); j++) {
            if (t[j] == s[i+j]) ++c;
        }
        chmax(m, c);
    }

    cout << t.size() - m << endl;
    return 0;
}