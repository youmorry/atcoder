#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using field = vector<vector<bool>>;
int n = 10;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

field seen;
void dfs(const field &F, int y, int x) {
    seen[y][x] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx >= n) continue;
        if (ny < 0 || ny >= n) continue;
        if (!F[ny][nx]) continue;
        if (seen[ny][nx]) continue;
        dfs(F, ny, nx);
    }
}

bool is_ok(const field &F, const field &seen) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (F[i][j] != seen[i][j]) return false;
        }
    }
    return true;
}

int main() {
    field F(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'x') F[i][j] = false;
            else F[i][j] = true; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (F[i][j]) continue;
            F[i][j] = true;
            seen = field(n, vector<bool>(n, false));
            dfs(F, i, j);
            if (is_ok(F, seen)) {
                cout << "YES" << endl;
                return 0;
            }    
            F[i][j] = false;
        }
    }

    cout << "NO" << endl;
    return 0;
}