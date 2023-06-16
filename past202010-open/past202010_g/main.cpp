#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> blocks;
    int cnt = 0;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.') ++cnt;
            else blocks.push_back({i, j});
        }
    }
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    
    int ans = 0;
    for (auto v : blocks) {
        queue<pair<int, int>> que;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        int bx = v.first;
        int by = v.second;
        grid[bx][by] = '.';

        int tmp_cnt = 0;
        que.push({bx, by});
        visited[bx][by] = true;
        
        while (!que.empty()) {
            int cx = que.front().first;            
            int cy = que.front().second;
            que.pop();

            for (int dir = 0; dir < 4; dir++) {
                int nx = cx + dx[dir]; 
                int ny = cy + dy[dir]; 
                
                if (nx < 0 || nx >= n) continue;
                if (ny < 0 || ny >= m) continue;
                if (visited[nx][ny]) continue;
                if (grid[nx][ny] == '#') continue;
            
                visited[nx][ny] = true;
                que.push({nx, ny});
                ++tmp_cnt;
            }
        }

        grid[bx][by] = '#';
        if (tmp_cnt == cnt) ++ans;
    }

    cout << ans << endl;
    return 0;
}