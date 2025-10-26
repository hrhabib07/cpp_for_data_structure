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
        string s;
        cin >> s;
        int n = s.size();

        vector<int> vsm;
        vector<int> vcp;
        string sm = "";
        string cp = "";

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            // cout << c << endl;
            if ((int)s[i] >= 97)
            {
                if (c == 'b')
                {
                    if (sm.size())
                    {

                        sm.pop_back();
                        vsm.pop_back();
                    }
                }
                else
                {
                    vsm.push_back(i);
                    sm.push_back(c);
                }
                // cout << sm << endl;
            }
            else
            {
                if (c == 'B')
                {
                    if (cp.size())
                    {
                        cp.pop_back();
                        vcp.pop_back();
                    }
                }
                else
                {
                    vcp.push_back(i);
                    cp.push_back(c);
                }
            }
        }

        string res = "";
        int newSz = sm.size() + cp.size();

        int i = 0, j = 0;
        while (i < sm.size() && j < cp.size())
        {
            if (vsm[i] < vcp[j])
                res += sm[i++];
            else
                res += cp[j++];
        }
        while (i < sm.size())
        {
            res += sm[i++];
        }
        while (j < cp.size())
        {
            res += cp[j++];
        }

        cout << res << endl;
    }

    return 0;
}
