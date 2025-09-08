#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        long long k; unsigned long long x;
        cin >> k >> x;

        unsigned long long total = 1ULL << (k + 1); // up to 2^61, fits in 64-bit
        unsigned long long a = x;
        unsigned long long b = total - x;

        vector<int> inv; // store operations used in reverse (inverse steps)

        // Walk back to (2^k, 2^k)
        while (a != b) {
            if (a < b) {
                // inverse of operation 1
                // previous state: (2a, b - a)
                unsigned long long na = a << 1;     // 2a
                unsigned long long nb = b - a;
                inv.push_back(1);
                a = na; b = nb;
            } else { // a > b
                // inverse of operation 2
                // previous state: (a - b, 2b)
                unsigned long long na = a - b;
                unsigned long long nb = b << 1;     // 2b
                inv.push_back(2);
                a = na; b = nb;
            }
        }

        // Forward sequence is the reverse of inverse steps
        reverse(inv.begin(), inv.end());

        cout << inv.size() << '\n';
        if (!inv.empty()) {
            for (size_t i = 0; i < inv.size(); ++i) {
                if (i) cout << ' ';
                cout << inv[i];
            }
        }
        cout << '\n';
    }
    return 0;
}
