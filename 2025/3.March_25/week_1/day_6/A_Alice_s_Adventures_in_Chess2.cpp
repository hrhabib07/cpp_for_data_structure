#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    pair<int, int> r;
    pair<int, int> p;
    p.first = 0;
    p.second = 0;
    bool flag = false;
    cin >> n >> r.first >> r.second;
    string s;
    cin >> s;
    while (p.first < r.first || p.second < r.second)
    {
        if (p.first == r.first && p.second == r.second)
        {
            flag = true;
            break;
        }

        for (int i = 0; i <= s.length(); i++)
        {
            char c = s[i];
            // cout << p.first << " " << p.second << endl;

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
            if (p.first == 0 || p.second == 0)
            {
                break;
            }
        }
    }

    if (flag)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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
