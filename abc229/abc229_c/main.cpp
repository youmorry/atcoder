#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> vec(n);

    for (auto &i : vec) {
        cin >> i.first >> i.second;
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    ll ans = 0;
    for (auto &i : vec) {
        ll num = min(w, i.second);
        ans += i.first * num;
        w -= num;
    }

    cout << ans << endl;
    return 0;
}