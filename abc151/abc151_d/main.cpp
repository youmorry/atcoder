#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for (auto &i : grid) cin >> i;
    
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};

    vector<vector<int>> visited(h, vector<int>(w, -1));
    queue<pair<int, int>> que;
    int ans = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '#') continue;
            visited.assign(h, vector<int>(w, -1));

            que.push(make_pair(i, j));
            visited[i][j] = 0;
            while(!que.empty()) {
                int cy = que.front().first;
                int cx = que.front().second;
                que.pop();

                for (int dir = 0; dir < 4; dir++) {
                    int ny = cy + dy[dir];
                    int nx = cx + dx[dir];
                    if (ny < 0 || ny >= h) continue;
                    if (nx < 0 || nx >= w) continue;
                    if (grid[ny][nx] == '#') continue;
                    if (visited[ny][nx] != -1) continue;

                    que.push(make_pair(ny, nx));
                    visited[ny][nx] = visited[cy][cx] + 1;

                    ans = max(ans, visited[ny][nx]);
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}