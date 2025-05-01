#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> v(3);
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }
 
        sort(v.begin(),v.end());
        int a = v[0]; int b=v[1]; int c=v[2];
 
        if (a == b && b == c) {
            cout << "YES" << endl;
        } else if (a == b && (c == 4 * a || c == 3 * a || c == 2 * a)) {
            cout << "YES" << endl;
        } else if ((b == 2 * a && c == 3 * a) || (b == 2 * a && c == 2 * a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}