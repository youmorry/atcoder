#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);

    vector<vector<int>> l(h, vector<int>(w));
    vector<vector<int>> u(h, vector<int>(w));
    vector<vector<int>> r(h, vector<int>(w));
    vector<vector<int>> d(h, vector<int>(w));

    for (int i = 0; i < h; i++) {
        cin >> s[i];
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '#') {
                l[i][j] = 0;
                u[i][j] = 0;
                continue;
            }
            if (i == 0) u[i][j] = 1;
            else if (i > 0) u[i][j] = u[i - 1][j] + 1;
            if (j == 0) l[i][j] = 1;
            else if (j > 0) l[i][j] = l[i][j - 1] + 1;
        }
    }

    for (int i = h-1; i >= 0; i--) {
        for (int j = w-1; j >= 0; j--) {
            if (s[i][j] == '#') {
                r[i][j] = 0;
                d[i][j] = 0;
                continue;
            }
            if (i == h-1) d[i][j] = 1;
            else if (i < h-1) d[i][j] = d[i + 1][j] + 1;
            if (j == w-1) r[i][j] = 1;
            else if (j < w-1) r[i][j] = r[i][j + 1] + 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int count = l[i][j] + u[i][j] + r[i][j] + d[i][j] - 3;
            ans = max(ans, count);
        }
    }

    cout << ans << endl;
    return 0;
}