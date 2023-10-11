#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    vector<int> N(n);
    for (int i = 0; i < n; i++) N[i] = i;
    vector<int> A(n);
    for (auto &a : A) cin >> a;
    vector<int> B(n);
    for (auto &b : B) cin >> b;

    stable_sort(N.begin(), N.end(), [&](auto &i1, auto &i2) -> bool {
        return A[i1] > A[i2];
    });
    
    sort(N.begin()+x, N.end());
    stable_sort(N.begin()+x, N.end(), [&](auto &i1, auto &i2) -> bool {
        return B[i1] > B[i2];
    });

    sort(N.begin() + x + y, N.end());
    stable_sort(N.begin()+x+y, N.end(), [&](auto &i1, auto &i2) -> bool {
        return A[i1] + B[i1] > A[i2] + B[i2];
    });

    sort(N.begin(), N.begin() + x + y + z);

    for (int i = 0; i < x+y+z; i++) {
        cout << N[i] + 1 << endl;
    }

    return 0;
}