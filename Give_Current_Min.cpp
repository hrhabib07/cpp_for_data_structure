#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        pq.push(val);
    }

    int q;
    cin >> q;

    while (q--) {
        int type;
        cin >> type;

        if (type == 0) {
            long long X;
            cin >> X;
            pq.push(X);
            if (!pq.empty()) cout << pq.top() << "\n";
            else cout << "Empty\n";
        }
        else if (type == 1) {
            if (!pq.empty()) cout << pq.top() << "\n";
            else cout << "Empty\n";
        }
        else if (type == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) cout << pq.top() << "\n";
                else cout << "Empty\n";
            } else {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}
