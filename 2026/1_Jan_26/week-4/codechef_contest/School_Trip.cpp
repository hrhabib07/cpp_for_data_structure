#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n, x, k;
    cin >> n >> x >> k;
    if (k > n)
    {
        cout << x << nl;
        return;
    }

    if (x % k == 0)
        cout << 0 << nl;
    else
    {
        int rem = x % k;

        if (x < k)
            cout << min(k - x, x) << nl;
        else
        {
            int next = ((x / k) + 1) * k;
            if (next <= n)
            {
                cout << min(rem, next - x) << nl;
            }
            else
            {
                cout << rem << nl;
            }
        }
    }
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
