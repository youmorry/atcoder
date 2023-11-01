#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int H, W; cin >> H >> W;
    vector<string> A(H);
    for (auto &a : A) cin >> a;

    vector<bool> white_h(H, true);
    vector<bool> white_w(W, true);

    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            if (A[h][w] != '.') {
                white_h[h] = false;
                white_w[w] = false;
            }
        }
    }

    vector<string> ans;
    for (int h = 0; h < H; h++) {
        string r = ""; 
        if (white_h[h]) continue;
        for (int w = 0; w < W; w++) {
            if (white_w[w]) continue;
            r += A[h][w];
        }
        ans.push_back(r);
    }

    for (auto i : ans) cout << i << endl;
    return 0;
}