#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int f(int m, vector<int> &V) {
    int res = 0;
    for (int i = 0; i < V.size(); i++) {
        res += m % V[i];
    }
    return res;
}

int main() {
    int N; cin >> N;
    vector<int> A(N);
    for (auto &a : A) cin >> a;

    int ans = 0;
    for (auto a : A) ans += a-1;
    cout << ans << endl;
    
    return 0;
}