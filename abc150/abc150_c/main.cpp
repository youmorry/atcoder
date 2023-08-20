#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n; cin >> n;
    vector<int> N(n);
    for (int i = 0; i < n; i++) N[i] = i+1; 

    vector<int> p(n), q(n);
    for (auto &i : p) cin >> i;
    for (auto &i : q) cin >> i;

    int cp, cq;
    cp = cq = 1;
    int c = 1;
    
    do {
        if (equal(N.cbegin(), N.cend(), p.cbegin())) cp = c; 
        if (equal(N.cbegin(), N.cend(), q.cbegin())) cq = c; 
        ++c;
    } while (next_permutation(N.begin(), N.end()));


    cout << abs(cp - cq) << endl;
    return 0;
}