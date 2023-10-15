#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll n; cin >> n;
    ll x = 1;
    ll y = 1;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (n == x*y) {
                cout << "Yes" << endl;
                return 0;
            }  
            y *= 3;
        }
        x *= 2;
        y = 1; 
    }

    cout << "No" << endl;
    return 0;
}