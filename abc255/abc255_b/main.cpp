#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,k;
    cin >> n >> k;

    vector<int> a(k);
    for (auto &i : a) {
        cin >> i;
        --i;
    } 

    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    ll res = 0;
    for (int i = 0; i < n; i++) {
        ll tmp = 8e18;
        for (auto &j : a) {
            tmp = min(tmp, (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
        }
        res = max(res, tmp);
    }

    printf("%.12lf\n", sqrt((double)res));
    return 0;
}