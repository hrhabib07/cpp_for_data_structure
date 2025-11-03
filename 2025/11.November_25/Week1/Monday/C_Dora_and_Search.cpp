#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int i = 0, j = n - 1;
        int mn = 1, mx = n;

        while (i < j)
        {
            if (a[i] == mn)
            {
                ++i;
                ++mn;
            }
            else if (a[i] == mx)
            {
                ++i;
                --mx;
            }
            else if (a[j] == mn)
            {
                --j;
                ++mn;
            }
            else if (a[j] == mx)
            {
                --j;
                --mx;
            }
            else
                break; 
        }

        if (i < j)
            cout << i + 1 << ' ' << j + 1 << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
