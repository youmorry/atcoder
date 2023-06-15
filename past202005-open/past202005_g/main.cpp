#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    map<int, map<int, bool>> blocks;
    for (int i = 0; i < n; i++) {
        int tx, ty;
        cin >> tx >> ty;
        blocks[tx][ty] = true;
    }
    int dx[] = {1, 0, -1, 1, -1, 0};
    int dy[] = {1, 1, 1, 0, 0, -1};

    queue<pair<int, int>> que;
    map<int, map<int, bool>> visited;
    map<int, map<int, int>> step;

    que.push({0, 0});
    visited[0][0] = true;
    step[0][0] = 0;
    while(!que.empty()) {
        int cx = que.front().first;    
        int cy = que.front().second;    
        que.pop();

        for (int dir = 0; dir < 6; dir++) {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            if (nx < -201 || nx > 201) continue;
            if (ny < -201 || ny > 201) continue;
            if (blocks[nx][ny]) continue;
            if (visited[nx][ny]) continue;

            visited[nx][ny] = true;
            step[nx][ny] = step[cx][cy] + 1;
            que.push({nx, ny});
        }
    }

    if (visited[x][y]) cout << step[x][y] << endl;
    else cout << -1 << endl;
    return 0;
}