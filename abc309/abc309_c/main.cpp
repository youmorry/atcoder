#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    map<int, ll> mp;
    mp[0] = 0;
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        mp[a[i]] += b[i];
        total += b[i]; 
    }

    for (auto [key, value] : mp) {
        total -= value;
        if (total <= k) {
            cout << key+1 << endl;
            return 0;
        }
    }

    return 0;
}