#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int d, n; cin >> d >> n;
    if (n == 100) ++n;
    int mi = 1;
    for (int i = 0; i < d; i++) mi *= 100;

    cout << mi*n << endl;
    return 0;
}