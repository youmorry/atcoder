#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isSimilar(char x, char y) {
    if (x == y) return true;
    if ((x == '1' || x == 'l') && (y == '1' || y == 'l')) return true;
    if ((x == '0' || x == 'o') && (y == '0' || y == 'o')) return true;
    return false;
}

int main() {
    int n; cin >> n;
    string s, t; cin >> s >> t;

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (!isSimilar(s[i], t[i])) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}