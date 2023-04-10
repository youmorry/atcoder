#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    ll r = b / gcd(a, b);

    if (r > 1000000000000000000 / a) cout << "Large" << endl;
    else cout << r*a << endl;

    return 0;
}