#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int ans = 0;
    int minnum = 100000*2;

    for (int i = 0; i < n; i++) {
        int p; cin >> p;
        minnum = min(minnum, p);
        if (p <= minnum) ++ans;
    }

    cout << ans << endl;
    return 0;
}