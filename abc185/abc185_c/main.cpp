#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int l; cin >> l;
    ll ans = 1;

    for (int i = 1; i <= 11; ++i) {
        ans *= l-i;
        ans /= i;
    }

    cout << ans << endl;
    return 0;
}