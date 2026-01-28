#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll cost = 0;
    while (true)
    {

        int idx = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != i + 1)
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
            break;

        cost += v[idx];
        sort(v.begin(), v.begin() + idx + 1);
    }

    cout << cost << nl;
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
