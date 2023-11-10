#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int Q; cin >> Q;
    queue<pair<int, ll>> que;
    for (int i = 0; i < Q; i++) {
        int q; cin >> q;
        if (q == 1) {
            ll x, c;
            cin >> x >> c;
            que.push({x, c});
        } else {
            ll c;
            cin >> c;
            if (que.empty()) continue;
            ll sum = 0;
            while (c > 0) {
                auto v = que.front();
                sum += v.first * min(v.second, c);
                c -= v.second;
                if (c >= 0) {
                    que.pop();
                } else {
                    que.front() = {v.first, c*-1};
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}