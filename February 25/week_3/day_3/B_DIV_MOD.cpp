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
        int res;
        int res1 = r / a + r % a;
        res = res1;
        int res2 = ((r - 1) / a + (r - 1) % a);
        if (r % a == 0 && res2 > res1)
            res = res1;
        int res3 = l / a + l % a;
        if (res3 > res)
            res = res3;

        int res4 = r * (r / a) - 1;
        if (r - a > l && res4 > res)
            res = res4;

        if (r % a == 0)
            res = ((r - 1) / a) + ((r - 1) % a);
        cout << res << endl;
        // cout << res1 << endl;
    }

    return 0;
}