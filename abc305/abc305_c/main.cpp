#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (auto &i : s) cin >> i;

    int miny, minx, maxy, maxx;
    miny = h, minx = w;
    maxy = maxx = -1;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '.') continue;
            miny = min(miny, i); 
            minx = min(minx, j); 
            maxy = max(maxy, i); 
            maxx = max(maxx, j); 
        }
    }

    for (int i = miny; i <= maxy; i++) {
        for (int j = minx; j <= maxx; j++) {
            if (s[i][j] == '#') continue;
            cout << i+1 << " " << j+1 << endl;
            return 0;
        }
    }

    return 0;
}