#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count1 = 0;
        int res = n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                count1++;
        }
        res -= count1 / 2;
        cout << res << '\n';
    }

    return 0;
}
