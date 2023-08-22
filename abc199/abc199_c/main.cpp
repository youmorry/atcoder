#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;

    bool flip = false;
    vector<int> vec(2*n);
    for (int i = 0; i < 2*n; i++) vec[i] = i;

    for (int i = 0; i < q; i++) {
        int t, a, b;
        cin >> t >> a >> b;

        if (t == 1) {
            --a, --b;
            if (flip) {
                if (a < n) a += n;
                else a -= n;
                if (b < n) b += n;
                else b -= n;
            }
            int tmp = vec[a];
            vec[a] = vec[b];
            vec[b] = tmp;
        } else {
            flip = !flip;
        }
    }

    if (flip) {
        for (int i = 0; i < 2*n; i++) {
            if (i < n) cout << s[vec[i+n]];
            else cout << s[vec[i-n]];
        }
        cout << endl;
    } else {
        for (auto idx : vec) cout << s[idx];
        cout << endl;
    }

    return 0;
}