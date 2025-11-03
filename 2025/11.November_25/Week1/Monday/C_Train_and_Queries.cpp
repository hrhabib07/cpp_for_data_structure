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
        int n, k;
        map<ll, pair<int, int>> mp;
        cin >> n >> k;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            auto it = mp.find(x);
            if (it == mp.end())
            {
                mp[x] = {i, i};
            }
            else
            {
                mp[x].second = i;
            }
        }

        while (k--)
        {
            ll a, b;
            cin >> a >> b;
            auto it1 = mp.find(a);
            auto it2 = mp.find(b);

            if (it1 != mp.end() && it2 != mp.end())
            {
                int first = mp[a].first;
                int second = mp[b].second;
                if (second == -1)
                    second = mp[b].first;
                if (first < second)
                {
                    cout << "YES" << nl;
                }
                else
                {
                    cout << "NO" << nl;
                }
            }
            else
            {
                cout << "NO" << nl;
            }
        }
    }

    return 0;
}
