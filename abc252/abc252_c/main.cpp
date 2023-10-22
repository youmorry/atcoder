#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N; cin >> N;
    vector<string> S(N);
    for (auto &s : S) cin >> s;

    int ans = 1e9;
    for(int i = 0; i <= 9; i++) {
        vector<int> V(10);
        for (int j = 0; j < N; j++) {
            int pos = S[j].find(to_string(i));
            ++V[pos];
        }
        int tmp = 0;
        for (int vi = 0; vi < 10; vi++) {
            int c = V[vi];
            if (c == 0) continue;
            chmax(tmp, c*10 - 10 + vi);
        }
        chmin(ans, tmp);
    } 

    cout << ans << endl;
    return 0;
}