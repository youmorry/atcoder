#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        int diff = abs(a[i-1] - a[i]);

        if (diff == 1) {
            ans.push_back(a[i]);
            continue;
        }

        if (a[i] > a[i-1]) {
            for (int j = 1; j <= diff; j++) {
                ans.push_back(a[i-1] + j);
            }
        } else {
            for (int j = 1; j <= diff; j++) {
                ans.push_back(a[i-1] - j);
            }
        }
    }

    for (auto i : ans) cout << i << " ";
    cout << endl;

    return 0;
}
