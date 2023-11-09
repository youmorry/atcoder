#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, X; cin >> N >> X;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<set<int>> DP(N+1);
    DP[0].insert(0);

    for (int i = 1; i <= N; i++) {
        set<int> t;
        for (auto v : DP[i-1]) {
            t.insert(v+A[i-1]);
            t.insert(v+B[i-1]);
        }
        DP[i] = t;
    }

    if (DP[N].count(X)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}