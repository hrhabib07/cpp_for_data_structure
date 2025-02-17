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
        int res1 = r % a + r / a;
        if (r > l)
        {
            int p1 = (r - 1) % a + (r - 1) / a;
            if (p1 > res1)
                res1 = p1;
            int minDiv = r - (r % a + 1);
            if (minDiv >= l)
            {
                int p2 = minDiv % a + minDiv / a;
                if (p2 > res1)
                    res1 = p2;
            }
            int p3 = l % a + l / a;
            if (p3 > res1)
                res1 = p3;
        }
        cout << res1 << endl;
    }
    return 0;
}