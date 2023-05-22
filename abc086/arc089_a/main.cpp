#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int time = 0;
    int cur[] = {0, 0};

    string ans = "Yes";
    for (int i = 0; i < n; i++) {
        int t, x, y; cin >> t >> x >> y;
        int passed = abs(time - t);
        int dist = abs(cur[0] - x) + abs(cur[1] - y);
        if (passed < dist || passed % 2 != dist % 2) ans = "No";
        time = t;
        cur[0] = x;
        cur[1] = y;
    }

    cout << ans << endl;
    return 0;
}