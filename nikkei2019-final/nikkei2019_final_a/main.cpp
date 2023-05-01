#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> vec(n+1);
    for (int i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        vec[i] = vec[i-1] + a;
    }

    vector<ll> ans(n+1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            ans[j] = max(ans[j], vec[i] - vec[i-j]);        
        }
    }

    for (int i = 1; i <= n; i++) cout << ans[i] << endl;
    return 0;
}