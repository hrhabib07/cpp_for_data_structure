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
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= i * 2 || x <= ((n - i - 1) * 2))
                flag = 1;
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}