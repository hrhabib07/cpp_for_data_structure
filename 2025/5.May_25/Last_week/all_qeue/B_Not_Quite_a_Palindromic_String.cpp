#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (char ch : s) {
            if (ch == '0') c0++;
            else c1++;
        }
        int mid = n / 2;
        int temp0 = c0 - (mid - k);
        int temp1 = c1 - (mid - k);
        if (temp0 >= 0 && temp0 % 2 == 0 && temp1 >= 0 && temp1 % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}