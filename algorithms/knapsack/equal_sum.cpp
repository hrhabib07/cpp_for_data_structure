#include <bits/stdc++.h>
using namespace std;
int n;
int arr[1005];
int dp[1005][1005];
bool subset_sum(int i, int sum)
{
    if (i < 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }
    if (dp[i][sum] != -1)
        return dp[i][sum];
    else if (arr[i] <= sum)
    {
        bool op1 = subset_sum(i - 1, sum - arr[i]);
        bool op2 = subset_sum(i - 1, sum);
        dp[i][sum] = op1 || op2;
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
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        arr[i] = x;
    };

    if (sum % 2)
        cout << "NO" << endl;
    else
    {
        long long half = sum / 2;
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= half; j++)
                dp[i][j] = -1;
        bool res = subset_sum(n - 1, half);
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
