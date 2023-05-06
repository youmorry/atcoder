#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> h(n);
    for (auto &i : h) cin >> i;
    map<int, int> mp;

    int l = 0;
    for (int i = 0; i < n; i++) {
        if (i < n-1 && h[i] >= h[i+1]) continue;
        mp[l] = i - l;
        l = i+1;
    }

    int ans = 0;
    for (auto [k, v] : mp) ans = max(ans, v);

    cout << ans << endl;
    return 0;
}