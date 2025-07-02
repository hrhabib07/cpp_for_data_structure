#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool found = false;

        for (int i = 0; i < n - 2 && !found; i++)
        {
            for (int j = i + 1; j < n - 1 && !found; j++)
            {
                for (int k = j + 1; k < n && !found; k++)
                {
                    if (v[i] + v[j] + v[k] == s)
                    {
                        found = true;
                    }
                }
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
