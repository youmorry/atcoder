#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<vector<int>> vec(n+1);
    for (int i = 0; i < n; i++) {
        int f, s;
        cin >> f >> s;
        vec[f].push_back(s);
    }

    int res = 0;
    vector<int> best;
    for (int i = 1; i <= n; i++) {
        sort(vec[i].begin(), vec[i].end());
        reverse(vec[i].begin(), vec[i].end());
        if (vec[i].size() >= 2) chmax(res, vec[i][0] + vec[i][1] / 2);
        if (vec[i].size() >= 1) best.push_back(vec[i][0]);
    }

    sort(best.begin(), best.end());
    reverse(best.begin(), best.end());
    if (best.size() >= 2) chmax(res, best[0] + best[1]);
    
    cout << res << endl;
    return 0;
}