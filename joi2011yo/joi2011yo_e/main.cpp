#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<string> grid(h);
    pair<int, int> start;
    vector<pair<int, int>> cheese(n);
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '.') continue;
            if (grid[i][j] == 'X') continue;
            if (grid[i][j] == 'S') start = {i, j};
            else cheese[grid[i][j] - '0' - 1] = {i, j};
        }
    }

    int ans = 0;
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    for (int i = n-1; i >= 0; i--) {
        queue<pair<int, int>> que;
        vector<vector<int>> visited(h, vector<int>(w, -1));
        int sx = cheese[i].first;
        int sy = cheese[i].second;

        int gx, gy;
        if (i > 0) gx = cheese[i-1].first, gy = cheese[i-1].second;
        else gx = start.first, gy = start.second;

        que.push({sx, sy});
        visited[sx][sy] = 0;
        while (!que.empty()) {
            int cx = que.front().first;
            int cy = que.front().second;
            que.pop();
            
            for (int dir = 0; dir < 4; dir++) {
                int nx = cx + dx[dir];
                int ny = cy + dy[dir];
                if (nx < 0 || nx >= h) continue;
                if (ny < 0 || ny >= w) continue;
                if (grid[nx][ny] == 'X') continue;
                if (visited[nx][ny] != -1) continue;

                visited[nx][ny] = visited[cx][cy] + 1; 
                que.push({nx, ny});
            }
        }

        ans += visited[gx][gy];
    }

    cout << ans << endl;
    return 0;
}