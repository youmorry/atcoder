#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string s = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n; cin >> n;
    cout << "3." << s.substr(0, n) << endl;
    return 0;
}