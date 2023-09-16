#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int a, b;
    cin >> a >> b;

    int ac = a;
    int bc = b;

    for (int i = 0; i < bc-1; i++) a *= ac;
    for (int i = 0; i < ac-1; i++) b *= bc;

    cout << a+b << endl;
    return 0;
}