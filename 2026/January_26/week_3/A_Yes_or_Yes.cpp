#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    string s;
    cin >> s;
    int flag = 0;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Y')
            count++;
        if (count == 2)
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
