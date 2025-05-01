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
        int max = 0;
        if (l < a && r >= a)
        {
            cout << ((a - 1) / a + (a - 1) % a) << endl;
        }
        else if (l >= a && r > a && r % a != 0)
        {
            cout << ((r) / a + (r) % a) << endl;
        }
        else if (l > a && r >= a)
        {
            cout << ((r - 1) / a + (r - 1) % a) << endl;
        }
    }
    return 0;
}
