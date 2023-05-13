#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    set<int> num;
    for (int i = 0; i <= 200000; i++) num.insert(i);

    for (int i = 0; i < n; i++) {
        int p; cin >> p;
        num.erase(p);
        cout << *num.begin() << endl;
    }

    return 0;
}