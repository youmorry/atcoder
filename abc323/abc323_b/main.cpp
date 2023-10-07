#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        string S;
        cin >> S;
        int c = 0;
        for (auto s : S) if (s == 'o') ++c;
        ans.push_back({c, i*-1});
    }

    sort(ans.rbegin(), ans.rend());

    for (auto a : ans) cout << a.second*-1+1 << " ";
    cout << endl;

    return 0;
}