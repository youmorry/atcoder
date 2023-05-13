#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s; cin >> s;
    string t; cin >> t;
    string c = "atcoder";
    
    // 各文字列に存在する文字
    set<char> chars;
    for (auto i : s) chars.insert(i);
    for (auto i : t) chars.insert(i);

    // 各文字列に存在する@の合計数
    int atcount = count(s.begin(), s.end(), '@') + count(t.begin(), t.end(), '@');
    
    bool ok = true;
    for (auto i : chars) {
        if (i == '@') continue;
        int sc = count(s.begin(), s.end(), i);
        int tc = count(t.begin(), t.end(), i);
        // 各文字列に存在する文字数が同じか、文字がatcoderに含まれていればtrue
        ok &= sc == tc || c.find(i) != string::npos;
        // 差分が合った場合、@の合計数を引く
        atcount -= abs(sc - tc);
    }
    
    if (ok && atcount >= 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
