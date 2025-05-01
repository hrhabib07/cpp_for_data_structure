#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> m;

    for (int i = 0; i < n; i++) {
        vector<int> r;
        for (int j = 0; j < 3; j++) {
            int x;
            cin >> x;
            r.push_back(x);
        }
        m.push_back(r);
    }

    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0; i < n; i++) {
        sum_x += m[i][0];
        sum_y += m[i][1];
        sum_z += m[i][2];
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}