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
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        auto found = mp.find(s);
        if (found != mp.end())
        {
            mp[s]++;
            cout << s << mp[s] << nl;
        }
        else
        {
            mp.insert({s, 0});
            cout << "OK" << nl;
        }
    }

    return 0;
}
