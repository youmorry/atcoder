#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll k; cin >> k;
    vector<string> vec;

    while (k != 0) {
        vec.push_back(to_string(k%2));
        k /= 2;
    }

    reverse(vec.begin(), vec.end());
    string ans;
    for (auto i : vec) ans += i;
    ans = regex_replace(ans, regex("1"), "2");

    cout << ans << endl;
    return 0;
}