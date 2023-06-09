#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using field = vector<string>;
int dw[] = {-1, 0, 1, 0};
int dh[] = {0, 1, 0, -1};
int h, w;
int sh, sw;
int gh, gw;

bool seen[500][500];
void dfs(const field &F, int ch, int cw) {
    seen[ch][cw] = true;;
    for (int dir = 0; dir < 4; dir++) {
        int nh = ch + dh[dir];
        int nw = cw + dw[dir];
        if (nh < 0 || nh >= h) continue;
        if (nw < 0 || nw >= w) continue;
        if (F[nh][nw] == '#') continue;
        if (seen[nh][nw]) continue;
        dfs(F, nh, nw);
    }
}

int main() {
    cin >> h >> w;

    field F(h);
    for (int i = 0; i < h; i++) {
        cin >> F[i];
        for (int j = 0; j < w; j++) {
            if (F[i][j] == 's') sh = i, sw = j;
            if (F[i][j] == 'g') gh = i, gw = j;
        }
    }

    memset(seen, false, sizeof(seen)); 
    dfs(F, sh, sw);

    if (seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}