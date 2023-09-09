#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<pair<int, int>>>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int n;
    cin >> n;

    vector<int> div;
    for (int i = 1; i <= 9; i++) {
        if (n % i == 0) div.push_back(i);
    }

    for (int i = 0; i <= n; i++) {
        bool ok = false;
        for (int j = 0; j < div.size(); j++) {
            if (i % (n / div[j]) == 0) {
                cout << div[j];
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << "-";
        }
    }
    
    cout << endl;
    return 0;
}