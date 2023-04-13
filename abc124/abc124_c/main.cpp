#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s; cin >> s;
    int ans = 1<<5;
    int count = 0;

    char cur = '0';
    for (int i = 0; i < s.length(); i++) {
        if (cur != s[i]) ++count;
        if (cur == '0') cur = '1';
        else cur = '0';
    }
    ans = min(ans, count);

    count = 0;
    cur = '1';
    for (int i = 0; i < s.length(); i++) {
        if (cur != s[i]) ++count;
        if (cur == '0') cur = '1';
        else cur = '0';
    }
    ans = min(ans, count);

    cout << ans << endl;
    return 0;
}