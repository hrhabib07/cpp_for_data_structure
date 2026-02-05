#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    string s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        v[i] = sum;
    }
    cin >> s;
    
    
    int left = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            left = i;
            break;
        }
    }
    int right = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'R')
        {
            right = i;
            break;
        }
    }

    // ll res = 0;
    // if (left > -1 && right > -1)
    // {
    //     for (int i = left; i < (right + 1); i++)
    //     {
    //         res += v[i];
    //     }
    // }
    cout << res << endl;
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
