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
    int t;
    cin >> t;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int dp[n + 1][t + 1];
    for (int i = 0; i <= t; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= coins[i - 1])
            {
                dp[i][j] = max(dp[i][j], dp[i][j - coins[i - 1]]);
            }
        }
    }

    cout << dp[1][4] << nl;
    cout << dp[n][t];
    return 0;
}
