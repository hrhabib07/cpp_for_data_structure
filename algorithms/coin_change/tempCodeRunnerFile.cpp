#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    // ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "Enter the number of Coins: ";
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter Coins : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a;
    cout << "Enter amount : ";
    cin >> a;
    int T[n + 1][a + 1];
    for (int i = 1; i <= a; i++)
    {
        T[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        T[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            int A = v[i - 1];

            if (A >= j)
            {
                T[i][j] = T[i - 1][j] + T[i][A - j];
            }
            else
            {
                T[i][j] = T[i - 1][j];
            }
        }
    }
    cout << "numbers of ways : ";
    cout << T[n][a] << endl;
    return 0;
}
