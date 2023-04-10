#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(12, vector<int>(12));
    vector<int> x(1<<18);
    vector<int> y(1<<18);
    vector<vector<bool>> kenaku(12, vector<bool>(12));
    int ans = 1<<30;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++) {
        cin >> x[i] >> y[i];
    }

    vector<int> vec;
    for (int i = 1; i <= m; i++) vec.push_back(i);
    for (int i = 1; i <= m; i++) {
        kenaku[x[i]][y[i]] = true;
        kenaku[y[i]][x[i]] = true;
    }

    do {
        bool flg = true;
        int sum = 0;
        for (int i = 0; i < n -1; i++) {
            if (kenaku[vec[i]][vec[i+1]] == true) flg = false;
        }
        for (int i = 0; i < n; i++) sum += a[vec[i]][i+1];
        if (flg == true) ans = min(ans, sum);
    } while (next_permutation(vec.begin(), vec.end()));

    if (ans == 1<<30) ans = -1;
    cout << ans << endl;

    return 0;
}