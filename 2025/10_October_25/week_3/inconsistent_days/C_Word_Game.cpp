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
        map<string, string> mp;
        ll p1 = 0, p2 = 0, p3 = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s] = "100";
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            auto it = mp.find(s);
            if (it != mp.end())
            {
                string val = mp[s];
                val[1] = '1';
                mp[s] = val;
            }
            else
            {
                mp[s] = "010";
            }
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            auto it = mp.find(s);
            if (it != mp.end())
            {
                string val = mp[s];
                val[2] = '1';
                mp[s] = val;
            }
            else
            {
                mp[s] = "001";
            }
        }

        for (auto par : mp)
        {
            string s = par.second;
            // cout << s << endl;
            if (s == "100")
                p1 += 3;
            else if (s == "010")
                p2 += 3;
            else if (s == "001")
                p3 += 3;
            else if (s == "110")
            {
                p1 += 1;
                p2 += 1;
            }
            else if (s == "011")
            {
                p2 += 1;
                p3 += 1;
            }
            else if (s == "101")
            {
                p1 += 1;
                p3 += 1;
            }
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }

    return 0;
}
