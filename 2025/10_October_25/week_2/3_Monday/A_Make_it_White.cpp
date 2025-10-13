#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0;
        int left = -1, right = -1;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (s[i] == 'B')
            {
                if (res == 0)
                {
                    left = i;
                    res = 1;
                }
                else
                {
                    right = i;
                }
            }
        }
        if (left == -1 && right == -1)
            cout << 0 << nl;
        else if (left != -1 && right == -1)
            cout << 1 << nl;
        else
            cout << right - left + 1 << nl;
    }

    return 0;
}
