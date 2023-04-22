#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> c(n);
    vector<int> r(n);
    bool existt = false;

    for (auto &i : c) {
        cin >> i;
        if (i == t) existt = true;
    }

    int maxr = -1;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        cin >> r[i];
        if (existt) {
            if (c[i] == t && r[i] > maxr) {
                maxr = r[i];
                ans = i+1;
            }
        } else {
            if (c[i] == c[0] && r[i] > maxr) {
                maxr = r[i];
                ans = i+1;
            }
        }    
    }

    cout << ans << endl;
    return 0;
}
