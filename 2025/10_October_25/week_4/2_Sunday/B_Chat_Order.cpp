#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<string, bool>> vps;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        auto it = mp.find(s);
        if (it != mp.end())
        {
            int prev = mp[s];
            mp[s] = i;
            vps[prev].second = true;
            vps.push_back({s, false});
        }
        else
        {
            mp[s] = i;
            vps.push_back({s, false});
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (!vps[i].second)
        {
            cout << vps[i].first << endl;
        }
    }

    return 0;
}
