#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int len = b-a;
    set<int> se;

    for (int i = 0; i < k && i <= len; i++) {
        se.insert(a+i);
        se.insert(b-i);
    }

    for (auto i : se) cout << i << endl;
    return 0;
}