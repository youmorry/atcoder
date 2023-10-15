#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int f(const string &t, const string &s) {
    for (int i = 0; i < t.size(); i++) {
        if (i >= s.size()) return s.size();
        if (s[i] != t[i]) return i;
    }
    return t.size();
}

int main() {
    int n; cin >> n;
    string t; cin >> t;
    string tr = t;
    reverse(tr.begin(), tr.end());
    vector<string> S(n);
    for (auto &s : S) cin >> s;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        A[i] = f(t, S[i]);
    }
    
    vector<int> B(n);
    for (int i = 0; i < n; i++) {
        string sr = S[i];
        reverse(sr.begin(), sr.end());
        B[i] = f(tr, sr);
    }

    set<int> ans;
    for (int i = 0; i < n; i++) {
        bool ok = false;
        int ab = A[i] + B[i];
        if (S[i] == t) ok = true;
        if (ab >= S[i].size() && S[i].size()+1 == t.size()) ok = true;
        if (ab >= S[i].size()-1 && S[i].size()-1 == t.size()) ok = true;
        if (ab == S[i].size()-1 && S[i].size() == t.size()) ok = true;
        if (ok) ans.insert(i);
    }

    cout << ans.size() << endl;
    for (auto i : ans) cout << i+1 << " ";
    cout << endl;

    return 0;
}