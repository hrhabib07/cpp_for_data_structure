#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;
        int maxT = ((r / a) * a) - 1;
        int res1 = (r / a) + (r % a);
        int res2 = (maxT / a) + (maxT % a);
        int res3 = (l / a) + (l % a);
        if (res2 > res1 && maxT > l)
        {
            res1 = res2;
        }
        if (res3 > res1)
        {
            res1 = res3;
        }
        if (r % a == 0)
        {
            int newRes = ((r - 1) / a) + ((r - 1) % a);
            if (newRes > res1)
            {
                res1 = newRes;
            }
        }
        if (r - a >= l)
        {
            int newMax = r - (r - (a * (r / a))) - 1;
            int max2 = (newMax / a) + (newMax % a);
            if (max2 > res1)
            {
                res1 = max2;
            }
        }
        cout << res1 << endl;
    }

    return 0;
}