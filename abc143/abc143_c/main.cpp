#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<char, int>> vec;

    for (int i = 0; i < n;) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            ++j;
        }

        vec.push_back(make_pair(s[i], j - i));
        i = j;
    }
    
    cout << vec.size() << endl;
    return 0;
}