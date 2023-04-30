#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int h, w;
vector<string> c;

int calc_cross_size(int hi, int wi) {
    int res = 0;
    int n = min(h, w);
    vector<vector<int>> p = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}};

    for (int i = 1; i <= n; i++) {
        bool ok = true;
        for (int pi = 0; pi < p.size(); pi++) {
            int y = hi + p[pi][0] * i;
            int x = wi + p[pi][1] * i;
            if (y < 0 || y > h-1 || x < 0 || x > w-1) {
                ok = false;
                break;
            }
            if (c[y][x] == '.') {
                ok = false;
                break;
            }
        }
        if (ok) ++res;
        else break;
    }

    return res;
}

int main() {
    cin >> h >> w;
    vector<int> ans(min(h, w)+1);
    for(int i = 0; i < h; i++) {
        string s;
        cin >> s;
        c.push_back(s);
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (c[i][j] == '.') continue;
            int res = calc_cross_size(i, j);
            if (res > 0) ++ans[res];
        }
    }

    for (int i = 1; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}