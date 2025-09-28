#include <bits/stdc++.h>
using namespace std;
int v[25];
int w[25];
int dp[25][105];

int knapsack(int i, int sum)
{
    if (i < 0)
        return 0;
    else if (dp[i][sum] != -1)
        return dp[i][sum];
    else if (w[i] <= sum)
    {
        int op1 = v[i] + knapsack(i - 1, sum - w[i]);
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
    int n, max_w;
    cin >> n >> max_w;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= max_w; j++)
            dp[i][j] = -1;

    int res = knapsack(n - 1, max_w);
    cout << res << endl;
    return 0;
}
