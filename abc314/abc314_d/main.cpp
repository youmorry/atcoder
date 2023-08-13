#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;
    vector<int> T(q), X(q);
    vector<char> C(q);

    int ma = -1;

    for (int i = 0; i < q; i++) {
        cin >> T[i] >> X[i] >> C[i];
        --X[i];

        if (T[i] == 1) {
            s[X[i]] = C[i];
        } else if (T[i] == 2) {
            chmax(ma, i);
        } else {
            chmax(ma, i);
        }
    }

    if (ma > -1) {
        if (T[ma] == 2) transform(s.begin(), s.end(), s.begin(), ::tolower);
        else transform(s.begin(), s.end(), s.begin(), ::toupper);
        for (int i = ma+1; i < q; i++) {
            if (T[i] != 1) continue;
            s[X[i]] = C[i];
        }
    }

    cout << s << endl;
    return 0;
}