#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    pair<int, int> p;
    int flag = 0;
    string s;
    cin >> s;
    int num = 1000;
    while (num--)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (p.first == a && p.second == b)
            {
                num = 0;
                break;
            }
            char c = s[i];
            if (c == 'N')
            {
                p.second++;
            }
            else if (c == 'E')
            {
                p.first++;
            }
            else if (c == 'S')
            {
                p.second--;
            }
            else if (c == 'W')
            {
                p.first--;
            }
        };
        if (p.first == 0 || p.second == 0)
            p.first = INT_MAX;
    }
    if (p.first == a && p.second == b)
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
