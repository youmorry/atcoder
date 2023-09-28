#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int a, b;
    cin >> a >> b;

    int x = b / 0.1;
    for (int i = 0; i < 9; i++) {
        int y = (x+i) * 0.08;
        if (y == a) {
            cout << x+i << endl;
            return 0;
        } 
    }

    cout << -1 << endl;
    return 0;
}