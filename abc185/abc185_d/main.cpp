#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (auto &a : A) cin >> a;
    sort(A.begin(), A.end());

    if (N == M) {
        cout << 0 << endl;
        return 0;
    }
    if (M == 0) {
        cout << 1 << endl;
        return 0;
    }

    int miw = 1e9;
    vector<int> V;

    for (int m = 0; m < M; m++) {
        int t = 0;

        if (m == 0 && A[m] != 1) {
            t = A[m] - 1;
            chmin(miw, t);
            V.push_back(t);
        }
        if (m > 0) {
            t = A[m] - A[m-1] - 1;
            if (t == 0) continue;
            chmin(miw, t);
            V.push_back(t);
        }
        if (m == M-1 && A[m] != N) {
            t = N - A[m];
            chmin(miw, t);
            V.push_back(t);
        }
    }

    int ans = 0;
    for (int i = 0; i < V.size(); i++) {
        int t = (V[i] + (miw - 1)) / miw;
        ans += t;
    }

    cout << ans << endl;

    return 0;
}