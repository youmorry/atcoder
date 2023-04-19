#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++;
    }

    for (auto [k, v] : mp) {
        pq.push(v);
    }

    int diff = 0;
    if (mp.size() > k) diff = (mp.size()) - k;

    int ans = 0;
    for (int i = 0; i < diff; i++) {
        ans += pq.top();
        pq.pop();
    }

    cout << ans << endl;
    return 0;
}