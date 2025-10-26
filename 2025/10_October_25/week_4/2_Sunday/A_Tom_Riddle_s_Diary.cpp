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
        auto it = mp.find(s);
        if (it != mp.end())
        {
            cout << "YES" << nl;
        }
        else
        {
            mp[s] = 1;
            cout << "NO" << nl;
        }
    }

    return 0;
}
