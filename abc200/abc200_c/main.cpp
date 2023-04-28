#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    
    ll ans = 0;
    vector<int> cnt(200);
    for (int i = 0; i < n; i++) {
        int mod = a[i] % 200;
        ans += cnt[mod];
        ++cnt[mod];
    }
    
    cout << ans << endl;
    return 0;
}