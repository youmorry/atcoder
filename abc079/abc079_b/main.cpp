#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<ll> vec(n+1);
    vec[0] = 2;
    vec[1] = 1;

    for (int i = 2; i <= n; i++) {
        vec[i] = vec[i-1] + vec[i-2];
    }

    cout << vec[n] << endl;
    return 0;
}