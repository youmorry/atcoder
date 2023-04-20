#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }

    int ans = 0;
    for (auto [k, v] : mp) {
        if (v < k) ans += v;
        else if (v > k) ans += v - k;
    }

    cout << ans << endl;
    return 0;
}