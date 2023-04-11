#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;    
    int b[n-1]; for (auto &i : b) cin >> i;

    ll ans = 0;
    for (int i = 1; i < n - 1; i++) {
        ans += min(b[i-1], b[i]);
    }
    ans += b[0];
    ans += b[n-1-1];

    cout << ans << endl;
    return 0;
}