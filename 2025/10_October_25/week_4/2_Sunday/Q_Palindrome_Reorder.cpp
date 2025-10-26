#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const char nl = '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    int sz = s.size();
    // cout << sz << endl;
    vector<int> freq(26, 0);
    for (int i = 0; i < sz; i++)
    {
        freq[s[i] - 'A']++;
    }
    string final = "";
    string res = "";
    int flag = 0;
    if (n % 2 == 0)
    {
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                flag = 1;
                break;
            }
        }

        if (!flag)
        {
            for (int i = 0; i < 26; i++)
            {
                int cur = freq[i];
                cur /= 2;
                while (cur--)
                {
                    res += (char)'A' + i;
                }
            }
            final = res;
            for (int i = res.size() - 1; i >= 0; i--)
            {
                final += res[i];
            }
        }
    }
    if (n % 2 != 0)
    {
        int warn = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0 && !warn)
            {
                warn = 1;
            }
            else if (freq[i] % 2 != 0 && warn)
            {
                flag = 1;
                break;
            }
        }

        if (!flag)
        {
            char last;
            for (int i = 0; i < 26; i++)
            {
                int cur = freq[i];
                if (cur % 2 != 0)
                {
                    last = (char)'A' + i;
                }
                cur /= 2;
                while (cur--)
                {
                    res += (char)'A' + i;
                }
            }
            final = res;
            final += last;
            for (int i = res.size() - 1; i >= 0; i--)
            {
                final += res[i];
            }
        }
    }

    if (!flag)
    {
        cout << final;
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }
    return 0;
}
