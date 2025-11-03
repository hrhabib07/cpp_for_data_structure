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
        vector<int> v(n, 0);
        map<int, int> mp;
        // int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = v[i];
            auto it = mp.find(x);
            if (it != mp.end())
            {
                ans = i + 1;
                break;
            }
            else
            {
                mp[x] = i;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
