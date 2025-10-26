#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';
vector<int> p;
vector<int> w;
int dp[105][105];
int max_w;

int items;

int main()
{
    // ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // cout << "Enter number of items in your Knapsack: " << endl;
    int n;
    cin >> n;
    // cout << "Enter size of your Knapsack: " << endl;
    int sz;
    cin >> sz;
    p.push_back(0);
    w.push_back(0);
    // cout << "Enter all the Prices of your Knapsack: " << endl;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        p.push_back(x);
    }
    // cout << "Enter all the wieghts of your Knapsack: " << endl;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        w.push_back(x);
    }
    max_w = sz;
    items = n;

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 0; i <= max_w; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < max_w; j++)
        {
            if (w[i] <= max_w)
            {
                dp[i][j] = max(p[i] + dp[i - 1][j - w[i]], dp[i - 1][j - w[i]]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][sz];
    return 0;
}
