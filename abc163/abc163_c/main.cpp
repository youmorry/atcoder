#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>());

    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        --a;
        vec[a].push_back(i);
    }
    
    for (auto i : vec) cout << i.size() << endl;
    return 0;
}