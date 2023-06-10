#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    int mod = n % 5;
    if (mod == 0) cout << n << endl;
    else if (mod <= 2) cout << n - mod << endl;
    else cout << n / 5 * 5 + 5 << endl;
    return 0;
}