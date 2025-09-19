#include <bits/stdc++.h>
using namespace std;
int v[1005], w[1005];
int dp[1005][1005];
int knacpsack(int n, int mx_wt)
{
    if (n < 0 || mx_wt <= 0)
        return 0;
    if (dp[n][mx_wt] != -1)
        return dp[n][mx_wt];

    if (w[n] <= mx_wt)
    {
        int op1 = knacpsack(n - 1, mx_wt - w[n]) + v[n];
        int op2 = knacpsack(n - 1, mx_wt);
        dp[n][mx_wt] = max(op1, op2);
        return dp[n][mx_wt];
    }
    else
    {
        dp[n][mx_wt] = knacpsack(n - 1, mx_wt);
        return dp[n][mx_wt];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int mx_wt;
        cin >> n >> mx_wt;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= mx_wt; j++)
            {
                dp[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int res = knacpsack(n - 1, mx_wt);
        cout << res << endl;
    }
    return 0;
}
