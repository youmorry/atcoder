#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());

    for (int i = 0; i < n-1; i++) {
       if (a[i] + 1 == a[i+1]) continue;
       cout << a[i] + 1 << endl; 
       return 0;
    }

    return 0;
}