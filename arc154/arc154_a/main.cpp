#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    constexpr ll DIV = 998244353;

    ll ai, bi;
    ai = bi = 0;

    for (int i = 0; i < n; i++) {
        ai *= 10;
        bi *= 10;
        ai += min(a[i], b[i]) - '0';
        bi += max(a[i], b[i]) - '0';
        ai %= DIV;
        bi %= DIV;
    }

    cout << (ai * bi) % DIV << endl;
    return 0;
}