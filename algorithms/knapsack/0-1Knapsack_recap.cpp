#include <bits/stdc++.h>
using namespace std;
int v[1005];
int w[1005];
int dp[1005][1005];

int knapsack(int i, int max_w)
{
    if (i < 0)
        return 0;
    if (dp[i][max_w] != -1)
        return dp[i][max_w];
    else if (max_w >= w[i])
    {
        int op1 = v[i] + knapsack(i - 1, max_w - w[i]);
        int op2 = knapsack(i - 1, max_w);
        dp[i][max_w] = max(op1, op2);
        return dp[i][max_w];
    }
    else
    {
        dp[i][max_w] = knapsack(i - 1, max_w);
        return dp[i][max_w];
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
    cout << res;
    return 0;
}
