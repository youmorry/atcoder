#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int a, b;
    cin >> a >> b;
    if (abs(a-b) == 1 && b%3 != 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}