#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string s; cin >> s;
    int k; cin >> k;

    sort(s.begin(), s.end());

    int c = 1;
    do {
        if (c == k) break;
        ++c;
    } while (next_permutation(s.begin(), s.end()));

    cout << s << endl;

    return 0;
}