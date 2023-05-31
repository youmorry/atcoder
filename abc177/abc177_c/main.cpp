#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    vector<ll> b(n+1);
    int m = 1000000007;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i+1] = b[i] + a[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll sum = (b[n] - b[i+1]) % m;
        ans += a[i] * sum;
        ans %= m;
    }

    cout << ans << endl;
    return 0;
}