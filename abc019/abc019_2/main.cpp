#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int len = s.length();

    vector<pair<char, int>> vec;
    for (int i = 0; i < len;) {
        int j = i;
        int count = 0;
        while (j < len && s[i] == s[j]) {
            ++j;
            ++count;
        }
        vec.push_back(make_pair(s[i], count));
        i = j;
    }

    for (auto i : vec) {
        cout << i.first << i.second;
    }
    cout << endl;

    return 0;
}