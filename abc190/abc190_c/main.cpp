#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);
    for (int i = 0; i < M; i++) cin >> A[i] >> B[i];

    int K;
    cin >> K;
    vector<int> C(K);
    vector<int> D(K);
    for (int i = 0; i < K; i++) cin >> C[i] >> D[i];

    int ans = 0;
    for (int bit = 0; bit < 1<<K; bit++) {
        vector<bool> ball(N);
        for (int k = 0; k < K; k++) {
            if (bit & 1<<k) ball[C[k]] = true;
            else ball[D[k]] = true;
        }
        int cnt = 0;
        for (int m = 0; m < M; m++) {
            if (ball[A[m]] && ball[B[m]]) ++cnt;
            chmax(ans, cnt);
        }
    }

    cout << ans << endl;
    return 0;
}