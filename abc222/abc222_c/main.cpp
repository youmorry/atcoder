#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

string a[101];
vector<pair<int, int>> ranking;

int judge(char a, char b) {
    if (a == b) return -1;
    if (a == 'G' && b == 'P') return 1;
    if (a == 'C' && b == 'G') return 1;
    if (a == 'P' && b == 'C') return 1;
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 2*n; i++) cin >> a[i]; 
    for (int i = 0; i < 2*n; i++) ranking.push_back(make_pair(0, i));

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            int p1 = ranking[2*i].second;
            int p2 = ranking[2*i+1].second;
            int result = judge(a[p1][j], a[p2][j]); 
            if (result != -1) ranking[2*i + result].first -= 1;
        }
        sort(ranking.begin(), ranking.end());
    }

    for (auto i : ranking) cout << i.second + 1 << endl;
    return 0;
}