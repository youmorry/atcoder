#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;
    vector<int> vec(n, -1);

    for (int i = 0; i < m; i++) {
        int s, c; cin >> s >> c;
        --s;
        
        if (c == 0 && s == 0 && n != 1) {
            cout << -1 << endl;
            return 0;
        }

        if (vec[s] != -1 && vec[s] != c) {
            cout << -1 << endl;
            return 0;
        }

        vec[s] = c;
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] == -1) {
            if (i == 0) {
                vec[i] = 1;
                if (n == 1) vec[i] = 0;
            } else {
                vec[i] = 0;
            }
        } 
        cout << vec[i];
    }
    cout << endl;

    return 0;
}