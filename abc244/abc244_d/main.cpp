#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    vector<char> s(3);
    vector<char> t(3);
    for (auto &i : s) cin >> i;
    for (auto &i : t) cin >> i;

    int diff = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] != t[i]) ++diff;
    }

    if (diff == 2) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}