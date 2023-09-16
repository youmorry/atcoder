#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size()-1; i++) {
        int r = s.size()-1;
        while (i <= r) {
            if (s[i] != s[r]) {
                --r;
                continue;
            }

            int l = r - i;
            int h = l / 2;
            string ls = s.substr(i, h+1);
            string rs = s.substr(i + h + l % 2, h+1);
            reverse(rs.begin(), rs.end());
            if (ls == rs) {
                chmax(ans, l+1);
            }
            --r;
        } 
    }

    cout << ans << endl;
    return 0;
}