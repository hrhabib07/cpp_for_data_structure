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
        if (n < 3)
        {
            cout << 0 << "\n";
        }
        else
        {
            int a = 0;
            int b = 0;
            for (int i = 0; i < n; i++)
            {
                int ch = s[i] + 0;
                if (ch == 45)
                    a++;
                else if (ch == 95)
                    b++;
            }
            cout << (1LL * a * a / 4) * b << "\n";
        }
    }

    return 0;
}