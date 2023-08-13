#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    if (abs(b-c) > 1) cout << "No" << endl;
    else if (abs(b-c) == 1) cout << "Yes" << endl;
    else if (b != 0) cout << "Yes" << endl;
    else if (a == 0 || d == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}