#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    set<int> num;
    for (int i = 1; i <= 2*n+1; i++) {
        num.insert(i);
    }

    while (1) {
        cout << *num.begin() << endl;
        num.erase(num.begin());

        int a; cin >> a;
        if (a == 0) return 0;
        num.erase(a);
    }
}