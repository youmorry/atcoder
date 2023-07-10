#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    constexpr int MAX_Q = 2 * 100000;
    int n, q;
    cin >> n >> q;
    map<int, set<ll>> mp;
    ll T[MAX_Q+1], A[MAX_Q+1], B[MAX_Q+1]; 

    for (int i = 0; i < q; i++) {
        ll t, a, b;
        cin >> t >> a >> b;
        --a, --b;
        T[i] = t, A[i] = a, B[i] = b;
    }

    for (int i = 0; i < q; i++) {
        ll t = T[i];
        ll a = A[i];
        ll b = B[i];

        if (t == 1) mp[a].insert(b);
        if (t == 2) mp[a].erase(b);
        if (t == 3) {
            if (mp[a].count(b) > 0 && mp[b].count(a) > 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}