#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> vec(n+1);
    int x = n-k+1;

    for (int i = 1; i <= n; i++) {
        ll a;
        cin >> a; 
        vec[i] += vec[i-1] + a;
    }

    for (int xi = 1; xi <= x; xi++) {
        cout << vec[xi+k-1] - vec[xi-1] << endl;
    }
    return 0;
}