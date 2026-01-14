#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    string r;
    cin >> r;
    int n = r.size();
    for (char c : r)
    {
        assert(c == 's' || c == 'u');
    }

    int total_u = count(r.begin(), r.end(), 'u');
    if (total_u == 0)
    {
        cout << 0 << nl;
        return;
    }

    int ans = total_u;
    vector<int> dp(n, 1e9);
    dp[0] = (r[0] != 's');
    if (n > 1)
    {
        dp[1] = (r[0] != 's') + (r[1] != 's');
    }

    for (int i = 2; i < n; ++i)
    {
        int cost = (r[i] != 's');
        dp[i] = min(dp[i], dp[i - 1] + cost);
        if (r[i - 1] == 'u')
        {
            int prev = (i - 2 >= 0 ? dp[i - 2] : 0);
            dp[i] = min(dp[i], prev + cost);
        }
    }

    ans = min(ans, dp[n - 1]);
    cout << ans << nl;
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
