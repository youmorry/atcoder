#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {
    int x;
    cin >> x;
    vector<bool> vec(x+1);
    vec[1] = 1;

    for (int i = 2; i <= x; i++) {
        int num = i*i;
        while (num <= x) {
            vec[num] = 1; 
            num *= i;
        }
    }

    for (int i = x; i >= 1; --i) {
        if (vec[i]) {
            cout << i << endl;
            return 0;
        }
    }
}