#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 10000;
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            ll value = ll(i) * a + ll(j) * b;
            if (n < value || (n - value) % c != 0) continue;
            ans = min(ans, i + j + (int)(n - value) / c);
        }
    }

    cout << ans << endl;
    return 0;
}