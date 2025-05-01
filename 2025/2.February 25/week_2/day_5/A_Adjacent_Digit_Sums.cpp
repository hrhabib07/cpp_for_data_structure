#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (y == x + 1) {
            cout << "YES\n";
        } else if (y > x + 1) {
            cout << "NO\n";
        } else {
            int diff = x + 1 - y;
            if (diff % 9 != 0) {
                cout << "NO\n";
            } else {
                int k = diff / 9;
                if (k >= 1 && x >= 9 * k) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
    }
    return 0;
}