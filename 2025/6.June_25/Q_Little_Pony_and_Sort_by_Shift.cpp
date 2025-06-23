#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int br = -1; 
    for (int i = 0; i < n; ++i) {
        if (v[i] > v[(i + 1) % n]) {
            if (br != -1) {
                cout << -1 << endl;
                return 0;
            }
            br = i;
        }
    }
    if (br == -1) {
        cout << 0 << endl;
    } else {
        cout << n - (br + 1) << endl;
    }

    return 0;
}
