#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int ind;
    if (a == b && b == c)
    {
        for (int i = 3; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != c)
            {
                ind = i + 1;
            }
        }
    }
    else
    {
        if (a == b && b != c)
            ind = 3;
        else if (a == c && a != b)
            ind = 2;
        else if (b == c && a != b)
            ind = 1;
        for (int i = 3; i < n; i++)
        {
            int x;
            cin >> x;
        }
    }
    cout << ind << '\n';
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
