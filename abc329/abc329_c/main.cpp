#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N; cin >> N;
    string S; cin >> S;
    map<char, int> mp;

    char c = S[0];
    int cnt = 1;
    mp[c] = cnt;
    for (int i = 1; i < N; i++) {
        if (c != S[i]) {
            c = S[i];
            cnt = 1;
        } else {
            ++cnt;
        } 
        chmax(mp[c], cnt);
    }

    int ans = 0;
    for (auto [k, v] : mp) ans+= v;
    cout << ans << endl;

    return 0;
}