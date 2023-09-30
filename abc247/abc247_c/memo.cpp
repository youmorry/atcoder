#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

vector<ll> memo;
ll f(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }

    if (n < 2) {
        memo[n] = n;
    } else {
        memo[n] = f(n-1) + f(n-2);
    }

    return memo[n];
}

int main() {
    int n; cin >> n;
    memo.assign(n+1, -1);
    cout << f(n) << endl;
    return 0;
}