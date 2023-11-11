#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, Q;
    cin >> N >> Q;
    string S; cin >> S;
    vector<int> V(N);
    for (int i = 1; i < N; i++) {
        if (S[i] == S[i-1]) V[i] = 1;
        V[i] += V[i-1];
    }

    for (int q = 0; q < Q; q++) {
        int l, r;
        cin >> l >> r;
        --l, --r;
        cout << V[r] - V[l] << endl;
    }

    return 0;
}