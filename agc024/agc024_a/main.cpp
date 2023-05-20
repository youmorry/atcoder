#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c, k; cin >> a >> b >> c >> k;
    ll ans = a - b;
    if (k % 2 == 1) ans *= -1;
    cout << ans << endl;
    return 0;
}