#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<tuple<string, int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        string s;
        int p;
        cin >> s >> p;
        vec[i] = make_tuple(s, p*-1, i);
    }

    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++) {
        cout << get<2>(vec[i]) + 1 << endl;
    }

    return 0;
}