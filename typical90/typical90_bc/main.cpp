#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                for (int l = 0; l < k; l++) {
                    for (int m = 0; m < l; m++) {
                        if (1LL * a[i] * a[j] % p * a[k] % p * a[l] % p * a[m] % p == q) ++ans;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}