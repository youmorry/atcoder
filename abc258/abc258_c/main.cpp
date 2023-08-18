#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll sumx = 0;

    for (int i = 0; i < q; i++) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            sumx += x;
        } else {
            --x;
            cout << s[(((n-(sumx%n)))+x) % n] << endl;
        }
    }

    return 0;
}