#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N; cin >> N;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> done(N+1), G;
    int v = 1;
    while (done[v] == 0) {
        done[v] = 1;
        G.push_back(v);
        v = A[v];
    }

    vector<int> ans;
    bool flag = false;
    for (auto nv : G) {
        if (nv == v) flag = true;
        if (flag) ans.push_back(nv);
    }

    cout << ans.size() << endl;
    for (auto v : ans) cout << v << " ";
    cout << endl;

    return 0;
}