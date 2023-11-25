#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, K;
    cin >> N >> K;
    int T[N][N];
    for (auto &i : T) for (auto &j : i) cin >> j;
    vector<int> V(N-1);
    for (int i = 1; i < N; i++) V[i-1] = i;

    int ans = 0;
    do {
        int cur = 0;
        int dist = 0;
        for (auto v : V) {
            dist += T[cur][v];
            cur = v;
        }
        dist += T[cur][0];
        if (dist == K) ++ans;

    } while (next_permutation(V.begin(), V.end()));

    cout << ans << endl;
    return 0;
}