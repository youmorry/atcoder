#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
    int n;
    cin >> n;
    map<int, int> mp;
    ll ans = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans += i - mp[a];
        ++mp[a];
    }
    
    cout << ans << endl;
    return 0;
}