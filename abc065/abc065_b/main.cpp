#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
        --i;
    }

    int crr = 0;
    bool ok = false;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        ++ans;
        crr = a[crr];
        if (crr == 1) {
            ok = true;
            break;
        }
    }

    if (ok) cout << ans << endl;
    else cout << -1 << endl;

    return 0;
}