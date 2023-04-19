#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            mp[a]++;
        }
    }

    int ans = 0;
    for (auto [k, v] : mp) {
        if (v == n) ++ans;
    }

    cout << ans << endl;
    return 0;
}