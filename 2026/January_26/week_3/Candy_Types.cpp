#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const char nl = '\n';

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    auto it = mp.begin();
    pair<int, int> ans = {0, 0};
    while (it != mp.end())
    {
        if (it->second > ans.second)
            ans = {it->first, it->second};
        it++;
    }
    cout << ans.first << endl;
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
