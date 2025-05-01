#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int res = 0;
        int c1 = s[0], c2 = s[1], c3 = s[2];
        int capY = 'Y' + 0;
        int capE = 'E' + 0;
        int capS = 'S' + 0;
        int smY = 'y' + 0;
        int smE = 'e' + 0;
        int smS = 's' + 0;
        if (c1 == capY || c1 == smY)
            res++;
        if (c2 == capE || c2 == smE)
            res++;
        if (c3 == capS || c3 == smS)
            res++;

        if (res == 3)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}