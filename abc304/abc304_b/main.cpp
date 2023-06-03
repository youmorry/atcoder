#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    if (n < 1000) cout << n << endl;
    else {
        string s = to_string(n);
        int l = s.length();
        int base = 1;
        for (int i = 0; i < l-3; i++) {
            base *= 10;
        }
        cout << n / base * base << endl;
    }
    return 0;
}