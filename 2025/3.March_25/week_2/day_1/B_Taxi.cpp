#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            c1++;
        else if (x == 2)
            c2++;
        else if (x == 3)
            c3++;
        else if (x == 4)
            c4++;
    }
    if (c3 >= c1)
        c1 = 0;
    else if (c1 > c3)
        c1 = c1 - c3;
    if (c2 % 2 == 0)
        c2 = c2 / 2;
    else
    {
        c2 = (c2 / 2) + 1;
        c1 = c1 - 2;
    }
    cout << c4 + c3 + c2 + ((c1 + 3) / 4) << endl;
    return 0;
}