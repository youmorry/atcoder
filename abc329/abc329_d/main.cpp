#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N, M;
    cin >> N >> M;
    map<int, int> mp;

    int top = 0;
    int mav = 0;
    for (int i = 0; i < M; i++) {
        int a; cin >> a;
        ++mp[a];
        if (mp[a] > mav) {
            mav = mp[a];
            top = a;
        } else if (mp[a] == mav) {
            if (a < top) {
                top = a;
            }
        }
        cout << top << endl;
    }

    return 0;
}