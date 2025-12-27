#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';
int val[1005];
int weight[1005];
int dp[1005][1005];
int knapsack(int i, int mx_weight)
{

    if (i < 0 || mx_weight == 0)
        return 0;
    else if (dp[i][mx_weight] != -1)
        return dp[i][mx_weight];
    else if (weight[i] <= mx_weight)
    {
        int op1 = knapsack(i - 1, mx_weight);
        int op2 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        return dp[i][mx_weight] = max(op1, op2);
    }
    else
    {
        return dp[i][mx_weight] = knapsack(i - 1, mx_weight);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, mx_wt;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cin >> mx_wt;

    cout << knapsack(n - 1, mx_wt);

    return 0;
}
