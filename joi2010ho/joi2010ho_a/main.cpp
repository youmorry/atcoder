#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> vec(n);
    for (int i = 1; i < n; i++) {
        int s;
        cin >> s;
        vec[i] = vec[i-1] + s; 
    }

    ll ans = 0;
    int current = 1;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        int next = current + a;
        ans += abs(vec[next-1] - vec[current-1]) % 100000;
        current = next;
    }
    ans %= 100000;

    cout << ans << endl;
    return 0;
}