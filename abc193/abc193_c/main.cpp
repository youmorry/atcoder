#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll N; cin >> N;
    unordered_set<ll> s;

    for (ll i = 2; i*i <= N; i++) {
        ll x = i*i;
        while(x <= N) {
            s.insert(x);
            x *= i;
        }
    }

    cout << N - s.size() << endl;
    return 0;
}