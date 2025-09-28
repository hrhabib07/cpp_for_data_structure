#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        if (x >= y)
            cout << -1 << endl;
        else
        {
            if (y >= 2 * x)
                cout << 3 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}
