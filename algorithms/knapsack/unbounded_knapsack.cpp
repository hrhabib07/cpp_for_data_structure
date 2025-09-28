#include <bits/stdc++.h>
using namespace std;
int v[1005];
int w[1005];
int dp[1005][1005];

int knapsack(int i, int sum)
{
    if (i < 0)
        return 0;
    else if (dp[i][sum] != -1)
        return dp[i][sum];
    else if (w[i] <= sum)
    {
        int op1 = v[i] + knapsack(i, sum - w[i]);
        int op2 = knapsack(i - 1, sum);
        dp[i][sum] = max(op1, op2);
        return dp[i][sum];
    }
    else
    {
        dp[i][sum] = knapsack(i - 1, sum);
        return dp[i][sum];
    }
}

int main()
{
    int n;
    cin >> n;
    int max_w;
    cin >> max_w;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= max_w; j++)
            dp[i][j] = -1;

    int res = knapsack(n - 1, max_w);

    cout << res << endl;

    return 0;
}
