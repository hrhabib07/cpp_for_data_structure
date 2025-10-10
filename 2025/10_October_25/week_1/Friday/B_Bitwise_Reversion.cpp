#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int res = 1;

        for (int i = 0; i < 32; i++)
        {
            int nnX = (x >> i) & 1;
            int nnY = (y >> i) & 1;
            int nnZ = (z >> i) & 1;

            if (nnX + nnY + nnZ == 2)
            {
                res = 0;
            }
        }
        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
