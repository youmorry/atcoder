#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int Q; cin >> Q;
    map<int, vector<int>> box;
    map<int, set<int>> card;

    for (int i = 0; i < Q; i++) {
        int q, qi, qj;
        cin >> q; 
        if (q == 1) {
            cin >> qi >> qj;
            --qi;
            --qj;
            box[qj].push_back(qi);
            card[qi].insert(qj);
        } else if (q == 2) {
            cin >> qi;
            --qi;
            auto v = box[qi];
            sort(v.begin(), v.end());
            for (int j = 0; j < v.size(); j++) {
                cout << v[j] + 1 << " ";
            }
            cout << endl;
        } else {
            cin >> qi;
            --qi;
            auto b = card[qi];
            for (auto v : b) cout << v + 1 << " ";
            cout << endl;
        }
    }

    return 0;
}
