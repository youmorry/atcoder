#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll n; cin >> n;
    vector<ll> res;
    // 0は必ず部分集合となる
    res.push_back(0);

    for (int i = 0; i < 60; i++) {
        // nのi桁目が1か
        if ( n >> i & 1LL) {
            int sz = res.size();
            for (int j = 0; j < sz; j++) {
                res.push_back(res[j] | 1LL << i);
            }
        }
    }

    sort(res.begin(), res.end());
    for (auto i : res) cout << i << endl;
    
    return 0;
}