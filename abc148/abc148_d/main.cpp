#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;

    int num = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == num+1) ++num;
    }

    if (num == 0) cout << -1 << endl;
    else cout << n - num << endl;
    
    return 0;
}