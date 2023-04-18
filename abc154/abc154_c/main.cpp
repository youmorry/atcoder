#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;

    sort(a.begin(), a.end());
    int pre = a[0];
    bool ng = false;    
    for (int i = 1; i < n; i++) {
        if (a[i] == pre) ng = true;
        pre = a[i];
    }

    if (ng) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}