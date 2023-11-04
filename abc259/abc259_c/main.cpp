#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    string S, T;
    cin >> S >> T;
    int ss = S.size();
    int ts = T.size();
    vector<pair<char, int>> SV;
    vector<pair<char, int>> TV;

    for (int i = 0; i < ss; i++) {
        int c = 0;
        for (int j = i+1; j < ss; j++) {
            if (S[i] != S[j]) break;
            ++c;
        }
        SV.push_back({S[i], c+1});
        i+=c;
    }

    for (int i = 0; i < ts; i++) {
        int c = 0;
        for (int j = i+1; j < ts; j++) {
            if (T[i] != T[j]) break;
            ++c;
        }
        TV.push_back({T[i], c+1});
        i+=c;
    }

    if (SV.size() != TV.size()) {
        cout << "No" << endl;
        return 0;
    }

    bool ok = true;
    for (int i = 0; i < SV.size(); i++) {
        if (SV[i].first != TV[i].first) ok = false;
        if (SV[i].second == 1 && TV[i].second != 1) ok = false;
        if (SV[i].second > TV[i].second) ok = false;
    }

    if (ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}