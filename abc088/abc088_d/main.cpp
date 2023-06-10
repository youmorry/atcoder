#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> G(h);
    for (auto &i : G) cin >> i;

    int white = 0;
    for (auto i : G) for (auto j : i) if (j == '.') ++white;

    queue<pair<int, int>> que;
    vector<vector<int>> dist(h, vector<int>(w, -1));

    que.push({0, 0});
    dist[0][0] = 0;

    while (!que.empty()) {
        pair<int, int> v = que.front();
        int x = v.first;
        int y = v.second;
        que.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (nx < 0 || nx >= h) continue;
            if (ny < 0 || ny >= w) continue;
            if (G[nx][ny] == '#') continue;
            if (dist[nx][ny] != -1) continue;

            que.push({nx, ny});
            dist[nx][ny] = dist[x][y] + 1;
        }
    }

    if (dist[h-1][w-1] == -1) cout << -1 << endl;
    else cout << white - (dist[h-1][w-1] + 1) << endl;

    return 0;
}