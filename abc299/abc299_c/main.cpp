#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 0;
    int maxl = -1;
    bool exist = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'o') {
            ++l;
            maxl = max(maxl, l);
            continue;
        }
        l = 0;
        exist = true;
    }

    if (exist) cout << maxl << endl;
    else cout << -1 << endl;

    return 0;
}
