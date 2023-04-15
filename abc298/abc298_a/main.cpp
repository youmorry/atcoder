#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int ok = 0;
    int ng = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') ++ok;
        else if (s[i] == 'x') ++ng;
    }

    if (ok > 0 && ng == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
