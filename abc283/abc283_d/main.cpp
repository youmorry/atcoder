#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string S; cin >> S;
    stack<set<char>> st;

    string x = "";
    for (auto c : S) {
        if (c == '(') {
            st.push(set<char>());
        } else if (c == ')') {
            auto top = st.top(); st.pop();
            for (auto v : top) {
                x.erase(remove(x.begin(), x.end(), v), x.end());
            }
        } else {
            if (x.find(c) != string::npos) {
                cout << "No" << endl;
                return 0;
            }
            if (st.empty()) st.push(set<char>());
            st.top().insert(c);
            x += c;
        }
    }

    cout << "Yes" << endl;
    return 0;
}