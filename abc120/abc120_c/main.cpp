#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s; cin >> s;
    stack<char> st;
    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
        if (st.size() > 0) {
            if (st.top() != s[i]) {
                ans += 2;
                st.pop();
            } else {
                st.push(s[i]);
            }    
        } else {
            st.push(s[i]);
        }
    }

    cout << ans << endl;
    return 0;
}