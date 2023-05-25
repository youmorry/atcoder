#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    deque<int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    int cnt = 0;

    while (a.size() > 1) {
        ++cnt;
        int mod = a.back() % a.front();
        a.pop_back();
        if (mod != 0) a.push_front(mod);
    }

    cout << cnt << endl;
    return 0;
}