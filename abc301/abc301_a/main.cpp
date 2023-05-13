#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int ct = 0;
    int ca = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'T') ++ct;
        else ++ca;
        if (ct >= (n+1)/2) {
            cout << 'T' << endl;
            return 0;
        } else if (ca >= (n+1)/2) {
            cout << 'A' << endl;
            return 0;
        }
    }

    return 0;
}
