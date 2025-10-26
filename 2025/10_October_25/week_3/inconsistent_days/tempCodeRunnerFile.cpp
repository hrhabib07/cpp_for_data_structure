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
        vector<pair<string, string>> v1;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v1.push_back({s, '100'});
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int res = 0;
            for (int j = 0; j < v1.size(); j++)
            {
                if (s == v1[j].first)
                {
                    v1[j].second = "110";
                    res = 1;
                    break;
                }
            }
            if (!res)
                v1.push_back({s, "010"});
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int res = 0;
            for (int j = 0; j < v1.size(); j++)
            {
                if (s == v1[j].first)
                {
                    string secnd = v1[j].second;
                    if (secnd == '100')
                    {
                        v1[j].second = '101';
                    }
                    else if (secnd == "010")
                    {
                        v1[j].second = '110';
                    }
                    else
                    {
                        v1[j].second = '111';
                    }
                    res = 1;
                    break;
                }
            }
            if (!res)
                v1.push_back({s, "001"});
        }

        ll p1 = 0, p2 = 0, p3 = 0;
        for (auto [first, second] : v1)
        {
            if (second == '001')
                p3 += 3;
            else if (second == '010')
                p2 += 3;
            else if (second == '100')
                p1 += 3;
            else if (second == '110')
            {
                p1 += 1;
                p2 += 1;
            }
            else if (second == '101')
            {
                p1 += 1;
                p3 += 1;
            }
            else if (second == '011')
            {
                p2 += 1;
                p3 += 1;
            }
        }

        cout << p1 << " " << p2 << " " << p3;
    }

    return 0;
}
