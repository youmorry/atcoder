#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    unsigned long long base = 1;
    unsigned long long ans = 0;
    for (int i = 0; i < 64; i++) {
        int a; cin >> a;
        ans += a*base;
        base *= 2;
    }
    cout << ans << endl;
    return 0;
}
