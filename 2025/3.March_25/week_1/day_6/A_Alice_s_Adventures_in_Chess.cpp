#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int x = 0, y = 0;
    bool met = false;

    for (int step = 0; step < 1000; ++step)
    {
        for (int i = 0; i < n; ++i)
        {
            if (x == a && y == b)
            {
                met = true;
                break;
            }
            char c = s[i];
            if (c == 'N')
                y++;
            else if (c == 'E')
                x++;
            else if (c == 'S')
                y--;
            else if (c == 'W')
                x--;
        }
        if (met)
            break;
        }

    if (met)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}