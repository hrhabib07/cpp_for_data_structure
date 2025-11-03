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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int q;
        cin >> q;
        while (q--)
        {
            int flag = 1;
            string s;
            cin >> s;
            map<char, int> mp;
            map<int, char> mp2;
            int sz = s.size();
            if (sz != n)
                flag = 0;
            else
            {
                for (int i = 0; i < n; i++)
                {
                    char ch = s[i];
                    int num = v[i];
                    auto it = mp.find(ch);
                    auto it2 = mp2.find(num);

                    if (it != mp.end())
                    {
                        int cur = mp[ch];
                        if (cur != num)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else if (it2 != mp2.end())
                    {
                        char cur = mp2[num];
                        if (cur != ch)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else
                    {
                        mp[ch] = num;
                        mp2[num] = ch;
                    }
                }
            }

            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
