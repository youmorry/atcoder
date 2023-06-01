#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, s, t;
    cin >> n >> s >> t;
    vector<int> a(n);
    vector<int> w(n);
    for (auto &i : a) cin >> i;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0) w[i] = w[i-1] + a[i];
        else w[i] = a[i];
        if (w[i] >= s && w[i] <= t) ++ans;
    }

    cout << ans << endl;
    return 0;
}