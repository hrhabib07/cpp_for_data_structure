#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int dp[1005][1005];
int subset_sum(int i, int sum)
{
    if (i < 0)
    {
        if (sum == 0)
            return 1;
        else
            return 0;
    }
    if (dp[i][sum] != -1)
        return dp[i][sum];
    if (v[i] <= sum)
    {
        int op1 = subset_sum(i - 1, sum - v[i]);
        int op2 = subset_sum(i - 1, sum);
        dp[i][sum] = op1 + op2;
        return dp[i][sum];
    }
    else
    {
        dp[i][sum] = subset_sum(i - 1, sum);
        return dp[i][sum];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum;
    cin >> sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = -1;
        }
    }

    int res = subset_sum(n - 1, sum);
    cout << res;
    return 0;
}
