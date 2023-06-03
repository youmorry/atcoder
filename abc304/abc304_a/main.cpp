#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<string> s(n);
    vector<int> a(n);
    int si = -1;
    int minnum = 1000000001;
    for (int i = 0; i < n; i++) {
        string _s; cin >> _s;
        int _a; cin >> _a;
        s[i] = _s;
        a[i] = _a;
        if (_a < minnum) {
            si = i;
            minnum = _a;
        }
    }

    for (int i = si; i < n+si; i++) {
        if ( i >= n) cout << s[i-n] << endl;
        else cout << s[i] << endl;
    }
    return 0;
}