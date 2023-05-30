#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string n; cin >> n;
    int ns = n.size();

    sort(n.rbegin(), n.rend());
    string a, b; a += n[0], b += n[1];

    for (int i = 2; i < ns; i++) {
        if (i%2 != 0) continue;

        int ia = stoi(a);
        int ib = stoi(b);
        if (a > b) {
            b += n[i];
            if (i+1 < ns) a += n[i+1];
        } else {
            a += n[i];
            if (i+1 < ns) b += n[i+1];
        }
    }

    cout << stoi(a) * stoi(b) << endl;
    return 0;
}