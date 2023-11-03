#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int N; cin >> N;
    vector<int> X(N);
    vector<int> Y(N);
    vector<int> O(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
        O[i] = i;
    }

    long double total = 0;
    int p = 0;
    do {
        ++p;
        for (int i = 0; i < N-1; i++) {
            int a = O[i];
            int b = O[i+1];
            long double xd = X[a] - X[b];
            long double yd = Y[a] - Y[b];
            total += sqrt(xd*xd + yd*yd);
        }
    } while (next_permutation(O.begin(), O.end()));

    cout << fixed << setprecision(10) << total / p << endl; 
    return 0;
}