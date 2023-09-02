#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        A[i] = a;
        B[i] = a+b; 
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++) ans[i] = i;

    stable_sort(ans.begin(), ans.end(), [&](int i, int j) {
        return (ll) A[i] * B[j] > (ll) A[j] * B[i];
    });

    for (auto i : ans) cout << i+1 << " ";
    cout << endl;

    return 0;
}