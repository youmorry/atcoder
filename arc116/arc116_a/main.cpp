#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        ll n; cin >> n;
        int codd = 0;
        int ceven = 0;
        for (int j = 1; j <= sqrt(n); j++) {
            if (n % j == 0) {
                ll div = n / j;
                if (div % 2 == 0) ++ceven;
                else ++codd;
                if (div == j) break;
                if (j % 2 == 0) ++ceven;
                else ++codd;
            }
        }
        if (codd > ceven) cout << "Odd" << endl;
        else if (ceven > codd) cout << "Even" << endl;
        else cout << "Same" << endl;
    }

    return 0;
}