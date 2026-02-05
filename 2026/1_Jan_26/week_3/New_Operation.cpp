#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';
const long long inf = 1e18;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<long long>> dp1(n, vector<long long>(n, inf));
    vector<vector<long long>> dp2(n, vector<long long>(n, -inf));

    for (int i = 0; i < n; i++)
    {
        dp1[i][i] = dp2[i][i] = v[i];
    }

    for (int k = 2; k <= n; k++)
    {
        for (int l = 0; l + k - 1 < n; l++)
        {
            int r = l + k - 1;
            for (int k = l; k < r; k++)
            {
                long long candMin = dp1[l][k] + 2 * dp1[k + 1][r];
                long long candMax = dp2[l][k] + 2 * dp2[k + 1][r];

                dp1[l][r] = min(dp1[l][r], candMin);
                dp2[l][r] = max(dp2[l][r], candMax);
            }
        }
    }

    cout << dp1[0][n - 1] << " " << dp2[0][n - 1] << nl;
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
