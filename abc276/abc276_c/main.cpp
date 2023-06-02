#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> p(n);
    for (auto &i : p) cin >> i;

    prev_permutation(p.begin(), p.end());
    for (auto i : p) cout << i << " "; cout << endl;

    return 0;
}