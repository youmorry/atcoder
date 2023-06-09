#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isprime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int x; cin >> x;
    for (int i = x; i <= 1000000; i++) {
        if (!isprime(i)) continue;
        cout << i << endl;
        return 0;
    }
    return 0;
}