#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    long long A, B;
    cin >> A >> B;

    long long small = 100 * B;
    long long large = 225 * A;

    if (small > large)
        cout << "Small" << nl;
    else if (large > small)
        cout << "Large" << nl;
    else
        cout << "Equal" << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
