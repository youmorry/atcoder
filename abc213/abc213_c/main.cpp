#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    vector<pair<int, int>> num(N);
    vector<int> A(N), B(N);
    map<int, int> ma, mb;

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        --a, --b;
        num[i] = {a, b};
        A[i] = a;
        B[i] = b;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    B.erase(unique(B.begin(), B.end()), B.end());

    int ta = A[0];
    ma[A[0]] = 0;
    for (int i = 1; i < A.size(); i++) {
        int d = A[i] - A[i-1] - 1;
        ta += d;
        ma[A[i]] = A[i] - ta;
    }
    int tb = B[0];
    mb[B[0]] = 0;
    for (int i = 1; i < B.size(); i++) {
        int d = B[i] - B[i-1] - 1;
        tb += d;
        mb[B[i]] = B[i] - tb;
    }

    for (auto [h, w] : num) {
        cout << ma[h] + 1 << " " << mb[w] + 1 << endl;
    }

    return 0;
}