#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] != a[j]) ++ans;
        }
    }
    
    cout << ans << endl;
    return 0;
}