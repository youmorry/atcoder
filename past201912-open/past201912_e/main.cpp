#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q; cin >> n >> q;
    vector<vector<char>> f(n, vector<char>(n, 'N'));

    for (int i = 0; i < q; i++) {
        int t, a, b; cin >> t >> a;
        if (t == 1) cin >> b;
        --a, --b;

        if (t == 1) {
            f[a][b] = 'Y';
        } else if (t == 2) {
            vector<vector<char>> tmp = f;
            for (int fi = 0; fi < n; fi++) {
                if (tmp[fi][a] == 'N') continue;
                if (fi == a) continue;
                f[a][fi] = 'Y';
            }
        } else {
            vector<vector<char>> tmp = f;
            for (int fi = 0; fi < n; fi++) {
                if (tmp[a][fi] == 'N') continue;
                for (int fj = 0; fj < n; fj++) {
                    if (tmp[fi][fj] == 'N') continue;
                    if (fj == a) continue;
                    f[a][fj] = 'Y';
                }
            }
        }
    }

    for (auto fi : f) {
        for (auto fj : fi) cout << fj;
        cout << endl;
    } 

    return 0;
}