#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int num[] = {0, 3, 1, 4, 1, 5, 9};    
    int dist[7];
    dist[0] = num[0];
    for (int i = 1; i < 7; i++) dist[i] = dist[i-1] + num[i];

    char p, q;
    cin >> p >> q;

    cout << abs(dist[p - 'A'] - dist[q - 'A']) << endl;
    return 0;
}