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
        string s;
        cin >> s;

        int i1 = -1, i2 = -1;
        int i = 0, j = n - 1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && i1 == -1)
                i1 = i;
            else if (s[i] == '1' && i1 != -1)
                i2 = i;
        }
        int count = 0;
        for (int i = i1; i < i2; i++)
        {
            if (s[i] == '1')
                count++;
        }
        int res = i2 - i1 - count;
        if (res < 0)
            cout << 0 << endl;
        else
            cout << i2 - i1 - count << endl;
    }

    return 0;
}
