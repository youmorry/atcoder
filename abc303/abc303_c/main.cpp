#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;

    string s; cin >> s;
    map<char, int> dx;
    dx['R'] = 1;
    dx['L'] = -1;
    map<char, int> dy;
    dx['U'] = 1;
    dx['D'] = -1;

    map<int, map<int, int>> item;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        ++item[x][y];
    }

    int cx = 0;
    int cy = 0;
    string ans = "Yes";
    for (int i = 0; i < n; i++) {
        if (h < 0) {
            ans = "No";
            break;
        }

        char c = s[i];
        cx += dx[c];
        cy += dy[c];

        --h;
        if (h > k) continue;
        if (item[cx][cy] > 0) {
            h = k;
            --item[cx][cy];
        }
    }

    cout << ans << endl;
    return 0;
}