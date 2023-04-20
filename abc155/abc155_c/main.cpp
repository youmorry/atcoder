#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    int maxc = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s]++;
        maxc = max(maxc, mp[s]);
    }

    vector<string> ans;
    for (auto [k, v] : mp) {
        if (v == maxc) ans.push_back(k);
    }

    sort(ans.begin(), ans.end());
    for (auto a : ans) cout << a << endl;

    return 0;
}