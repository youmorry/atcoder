#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string patern (string s, int len) {
    string res = s; 
    for (int i = 1; i < len; i++) {
        if (res.back() == '1') res += "0";
        else res += "1";
    }
    return res;
}

int main() {
    string s; cin >> s;
    bitset<100000> target(s);
    int len = s.length();

    int ans = 100000;
    ans = min(ans, (int)(target ^ bitset<100000>(patern("1", len))).count());
    ans = min(ans, (int)(target ^ bitset<100000>(patern("0", len))).count());

    cout << ans << endl;
    return 0;
}