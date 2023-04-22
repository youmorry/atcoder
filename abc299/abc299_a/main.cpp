#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int counta = 0;
    int countb = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*' && counta == 0) break;
        if (s[i] == '|' && counta == 1 && countb == 1) {
            cout << "in" << endl;
            return 0;
        }
        if (s[i] == '|') ++counta;
        if (s[i] == '*') ++countb;
    }

    cout << "out" << endl;
    return 0;
}
