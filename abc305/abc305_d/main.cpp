#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> a, fa;
int f(int x) {
    int j = upper_bound(a.begin() + 1, a.end(), x) - a.begin() - 1;
    return fa[j] + (fa[j+1] - fa[j]) / (a[j+1] - a[j]) * (x - a[j]);
}

int main() {
    int n;
    cin >> n;
    a.resize(n);
    fa.resize(n);
    for (auto &i : a) cin >> i;

    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) fa[i] = fa[i-1] + a[i] - a[i-1];
        else fa[i] = fa[i-1];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << f(r) - f(l) << endl;
    }
    return 0;
}