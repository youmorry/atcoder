#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> one(n+1);
    vector<int> two(n+1);

    for (int i = 1; i <= n; i++) {
        int c, p;
        cin >> c >> p;
        if (c == 1) {
            one[i] = one[i-1] + p;
            two[i] = two[i-1] + 0;
        } else {
            one[i] = one[i-1] + 0;
            two[i] = two[i-1] + p;
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << one[r] - one[l-1] << " " << two[r] - two[l-1] << endl; 
    }

    return 0;
}