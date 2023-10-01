#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    map<string, int> se;
    queue<string> q;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (se[s] == 0) q.push(s);
        else q.push(s + "(" + to_string(se[s]) + ")");
        ++se[s]; 
    }

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}