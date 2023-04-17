#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    set<string> se;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        se.insert(s);
    }

    cout << se.size() << endl;
    return 0;
}