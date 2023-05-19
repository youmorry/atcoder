#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    vector<int> v;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i-1] == a[i]) {
            ++cnt;
        } else {
            v.push_back(cnt);
            cnt = 1;
        } 
        if (i == n-1) v.push_back(cnt);
    }

    int ans = 0;
    for (auto i : v) ans += i/2;

    cout << ans << endl;
    return 0;
}