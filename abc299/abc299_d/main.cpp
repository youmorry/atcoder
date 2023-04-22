#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    int l = 1;
    int r = n;
    
    while (r-l > 1) {
        int mid = (r+l) / 2;
        cout << "? " << mid << endl;

        int x;
        cin >> x;
        if (x == 0) l = mid;
        else r = mid;
    }

    cout << "! " << l << endl;
    return 0;
}
