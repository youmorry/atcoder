#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int h, w;
vector<string> s;
vector<vector<int>> v = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}
};

void snuke(int sh, int sw) {
    string key = "snuke";
    int ks = (int)key.size();
    for (int i = 0; i < (int)v.size(); i++) {
        auto offsets = v[i];
        bool ok = false;

        for (int j = 0; j < ks; j++) {
            int ch = sh + offsets[0] * j;
            int cw = sw + offsets[1] * j;
            if (ch < 0 || ch >= h) break;
            if (cw < 0 || cw >= w) break;

            char target = s[ch][cw];
            if (key[j] != target) break;

            if (j == ks - 1) ok = true; 
        }

        if (ok) {
            for (int j = 0; j < ks; j++) {
                cout << sh + offsets[0] * j + 1 << " " << sw + offsets[1] * j + 1 << endl;
            }
            return;
        }
    }
}

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        string _s; cin >> _s;
        s.push_back(_s);
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] != 's') continue;
            snuke(i, j);
        }
    }
    
    return 0;
}