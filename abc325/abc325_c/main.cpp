#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int h, w;
vector<string> S;
map<pair<int, int>, bool> seen;
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
void f(int hi, int wi) {
    for (int i = 0; i < 8; i++) {
        int nh = hi + dy[i];
        int nw = wi + dx[i];
        if (nh < 0 || nh >= h) continue;
        if (nw < 0 || nw >= w) continue;
        char c = S[nh][nw];
        if (c != '#') continue;
        if (seen[{nh, nw}]) continue;

        seen[{nh, nw}]= true;
        f(nh, nw);
    }
    return ;
}

int main() {
    cin >> h >> w;
    S.assign(h, "");
    for (auto &s : S) cin >> s;

    int ans = 0;
    for (int hi = 0; hi < h; hi++) {
        for (int wi = 0; wi < w; wi++) {
            char c = S[hi][wi];
            if (c != '#') continue;
            if (seen[{hi, wi}]) continue;

            seen[{hi, wi}] = true;
            f(hi, wi);
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
} 