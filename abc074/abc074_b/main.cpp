#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        ans += min(x, abs(x - k)) * 2;
    }

    cout << ans << endl;
    return 0;
}