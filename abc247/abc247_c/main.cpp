#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

string f(int n) {
    if (n == 1) return "1";
    return f(n-1) + " " + to_string(n) + " " + f(n-1);
}

int main() {
    int n; cin >> n;
    if (n == 1) cout << 1 << endl;
    else cout << f(n-1) + " " + to_string(n) + " " + f(n-1) << endl;
    return 0;
}