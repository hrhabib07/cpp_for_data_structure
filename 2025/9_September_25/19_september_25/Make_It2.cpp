#include <bits/stdc++.h>
using namespace std;
bool dp[100005];
bool numb(int n)
{
    dp[1] = true;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i])
        {
            if (i + 3 <= n)
                dp[i + 3] = true;
            if (i * 2 <= n)
                dp[i * 2] = true;
        }
    }
    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            dp[i] = false;
        };

        bool res = numb(n);
        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
