#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k; cin >> n >> k;
    vector<int> c(n);
    set<int> se;
    map<int, int> mp;
    for (auto &i : c) cin >> i;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int fi = i-k+1;
        if (i >= k - 1) {
            se.insert(c[i]);
            ++mp[c[i]];

            ans = max(ans, (int)se.size());

            if (mp[c[fi]] == 1) se.erase(c[fi]);
            --mp[c[fi]];
        } else {
            se.insert(c[i]);
            ++mp[c[i]];
        } 
    }

    cout << ans << endl;
    return 0;
}