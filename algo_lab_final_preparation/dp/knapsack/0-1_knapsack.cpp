#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

struct Item
{
    int value;
    int weight;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int w;
    cin >> w;
    vector<Item> items(n);
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].weight >> items[i].value;
    }
    int dp[n + 1][w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else
            {
                int cw = items[i - 1].weight;
                int cv = items[i - 1].value;
                dp[i][j] = dp[i - 1][j];
                if (cw <= j)
                {
                    dp[i][j] = max(dp[i][j], cv + dp[i - 1][j - cw]);
                }
            }
        }
    }

    cout << dp[n][w];

    return 0;
}
