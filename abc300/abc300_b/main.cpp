#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int h, w;

vector<string> shifth(vector<string> vec) {
    vector<string> res(h);
    for (int i = 0; i < h; i++) {
        if (i < h-1) res[i] = vec[i+1];
        else res[i] = vec[0];
    }
    return res;
}
vector<string> shiftw(vector<string> vec) {
    vector<string> res(h);
    for (int i = 0; i < h; i++) {
        res[i] = vec[i];
        for (int j = 0; j < w; j++) {
            if (j < w-1) res[i][j] = vec[i][j+1];
            else res[i][j] = vec[i][0];
        }
    }
    return res;
}

bool equal(vector<string> a, vector<string> b) {
    bool res = true;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) res = false;
    }
    return res;
}

int main() {
    cin >> h >> w;
    vector<string> a(h);
    vector<string> b(h);
    
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;

    bool ans = false;
    auto shifted = a;

    for (int i = 0; i < h; i++) {
        shifted = shifth(shifted);
        if (equal(shifted, b)) ans = true;
        for (int j = 0; j < w; j++) {
            shifted = shiftw(shifted);
            if (equal(shifted, b)) ans = true;
        }   
    }
    
    if (ans) cout << "Yes" << endl;
    else  cout << "No" << endl;

    return 0;
}
