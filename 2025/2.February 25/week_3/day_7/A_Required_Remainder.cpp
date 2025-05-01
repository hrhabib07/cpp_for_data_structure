#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int mult = n / x;
        if (mult * x + y <= n)
        {
            cout << mult * x + y << endl;
        }
        else
        {
            int diff = abs(x - y);
            cout << mult * x - diff << endl;
        }
    }

    return 0;
}