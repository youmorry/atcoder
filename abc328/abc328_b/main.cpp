#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N; cin >> N;
    vector<int> D(N);
    for (auto &d : D) cin >> d;
    set<int> se;
    se = {1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int n = i+1;
        int d = D[i];
        if (se.count(n) == 0) continue;
        n %= 10;
        int b = n;
        while (n <= d) {
            ++ans;
            n *= 10;
            n += b;
        }
    }
    cout << ans << endl;
    return 0;
}