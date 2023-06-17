#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n*3);
    map<int, int> cnt;
    set<int> ans;

    for (int i = 0; i < n*3; i++) {
        cin >> a[i];
        ++cnt[a[i]];
        if (cnt[a[i]] == 2) ans.insert(i);
    }

    for (auto i : ans) cout << a[i] << " ";
    cout << endl;
    return 0;
}
