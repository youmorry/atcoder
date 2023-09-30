#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int pos = s.find("ABC");
    if (pos == string::npos) {
        cout << -1 << endl;
    } else {
        cout << pos+1 << endl;
    }

    return 0;
}