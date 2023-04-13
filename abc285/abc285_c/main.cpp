#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string az = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int base = 26;
    string s; cin >> s;

    ll ans = 0;
    for (int i = 0; i < s.length(); ++i) {
        ll num = az.find_first_of(s[i]) + 1;
        ans += num * (ll)pow(base, s.length() - i - 1);
    }

    cout << ans << endl;
    return 0;
}