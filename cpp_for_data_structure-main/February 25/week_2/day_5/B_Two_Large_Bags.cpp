#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        bool possible = true;
        for (int i = 0; i < n; i += 2) {
            if (a[i] != a[i + 1]) {
                if (i + 2 < n && a[i] + 1 == a[i + 1] && a[i + 1] == a[i + 2]) {
                    // We can increment a[i] to match a[i+1]
                    a[i]++;
                } else {
                    possible = false;
                    break;
                }
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}