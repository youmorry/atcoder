#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cmax = 0;
    for (int i = 0; i < n-1; i++) {
        set<char> a;
        set<char> b;
        for (int j = 0; j <= i; j++) {
            a.insert(s[j]);
        }
        for (int j = i+1; j < n; j++) {
            b.insert(s[j]);
        }
        int c = 0;
        for (auto v : a) {
            if (b.count(v)) {
                ++c;
            }
        }
        cmax = max(cmax, c);
    }

    cout << cmax << endl;
    return 0;
}