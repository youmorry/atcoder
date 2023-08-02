#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> a, b, c;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        b.push(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        c.push(x);
    }

    int ans = 0;
    while (!a.empty()) {
        int aa = a.top(); a.pop();

        while (!b.empty()) {
            int bb = b.top(); b.pop();
            if (bb <= aa) continue;

            while (!c.empty()) {
                int cc = c.top(); c.pop();
                if (cc <= bb) continue;
                ++ans;
                break;
            }
            break;
        }

    }

    cout << ans << endl;
    return 0;
}