#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<double> L(n), R(n);

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t >> L[i] >> R[i];
        if (t == 2) R[i] -= 0.5;
        else if (t == 3) L[i] += 0.5;
        else if (t == 4) L[i] += 0.5, R[i] -= 0.5;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (max(L[i], L[j]) <= min(R[i], R[j])) ++ans;
        }
    }
    
    cout << ans << endl;
    return 0;
}