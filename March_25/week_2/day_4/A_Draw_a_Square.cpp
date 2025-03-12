#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if (l > 0 && r > 0 && u > 0 && d > 0)
    {

        if (l == r && r == d && d == u)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    else
        cout << "No" << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
