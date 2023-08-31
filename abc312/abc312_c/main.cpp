#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    vector<pair<int, int>> events;
    for (int i = 0; i < n; i++) events.push_back({a[i], 0});
    for (int i = 0; i < m; i++) events.push_back({b[i]+1, 1});
    sort(events.begin(), events.end());

    int na = 0, nb = m;
    for (auto [p, type] : events) {
        if (type == 0) na++;
        else nb--;
        if (na >= nb) {
            cout << p << endl;
            return 0;
        }
    }

    return 0;
}