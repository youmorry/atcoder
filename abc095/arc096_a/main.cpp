#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    int mi = min(x, y);
    ll ans = 0;

    if (a + b > c * 2) {
        ans += mi * c * 2;
        x -= mi, y -= mi;
    }

    if (a > c * 2) ans += x * c * 2;
    else ans += x * a;

    if (b > c * 2) ans += y * c * 2;
    else ans += y * b;

    cout << ans << endl;
    return 0;
}