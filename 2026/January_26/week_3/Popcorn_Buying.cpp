#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n < 150)
        cout << 0 << endl;
    else
        cout << (n - 100) / 50 << nl;
    return 0;
}
