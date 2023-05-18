#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> h(n);
    for (auto &i : h) cin >> i;

    int ans = 0;
    int active = 0;
    for (int i = 0; i < n; i++) {
        if (active >= h[i]) {
            active = h[i];
        } else {
            ans += h[i] - active;
            active = h[i];
        }
    }

    cout << ans << endl;
    return 0;
}