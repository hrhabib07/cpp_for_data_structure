#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];

    int mx = 0;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v2[i])
        {
            flag = 0;
            break;
        }
        if (v[i] <= mx)
        {
            if (v[i] != v2[i])
            {
                flag = 0;
                break;
            }
        }
        mx = max(mx, v[i]);
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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