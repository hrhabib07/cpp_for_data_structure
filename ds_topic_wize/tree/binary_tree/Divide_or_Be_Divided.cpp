#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;

    int xth = s[x - 1] - '0';
    int yth = s[y - 1] - '0';

    if ((xth != 0 && yth % xth == 0) || (yth != 0 && xth % yth == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
